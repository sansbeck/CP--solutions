#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
vector<string> grid;
vector<vector<int>> dist;
vector<vector<pair<int,int>>> par;
vector<int> dx = {-1,0,1,0};
vector<int> dy = {0,1,0,-1};
vector<pair<int,int>> ans;
queue<pair<int,int>> q;
int n,m;
bool check(int x,int y)
{
    if (x>=0 && x<n && y>=0 && y<m && grid[x][y]!='#') return 1;
    return 0;
}
void bfs(pair<int,int> st)
{
    dist[st.first][st.second]=0;
    par[st.first][st.second]=make_pair(-1,-1);
    q.push(st);
    while(!q.empty())
    {
        auto pos = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            if(check(pos.first+dx[i],pos.second+dy[i]) && dist[pos.first+dx[i]][pos.second+dy[i]] > dist[pos.first][pos.second]+1)
            {
                dist[pos.first+dx[i]][pos.second+dy[i]] = dist[pos.first][pos.second]+1;
                par[pos.first+dx[i]][pos.second+dy[i]] = make_pair(pos.first,pos.second);
                q.push({pos.first+dx[i],pos.second+dy[i]});
            }   
        }
    }
}
void path(pair<int,int> e)
{
    if(e==make_pair(-1,-1)) return;
    path(par[e.first][e.second]);
    ans.push_back(make_pair(e.first,e.second));
    return;
}


int main() {
    cin >> n >> m;
    grid.resize(n);
    pair<int,int> st,e;
    forall(i,0,n)
    {
        cin >> grid[i];
        //cout << grid[i] <<endl;
    }
    forall(i,0,n)
    { 
        forall(j,0,m)
        {
            //cout << n << m << endl;
            if(grid[i][j]=='A')
            {
                st.first=i;st.second=j;
            }
            else if(grid[i][j]=='B')
            {
                e.first=i;e.second=j;
            }
        }
    }
     //cout << st.first << st.second << "++" <<e.first << e.second << endl;
      dist = vector<vector<int>> (n,vector<int>(m,1e8));
    par = vector<vector<pair<int,int>>> (n,vector<pair<int,int>>(m,{0,0}));
 //cout << st.first << st.second << "++" <<e.first << e.second << endl;
      bfs(st);
    if(dist[e.first][e.second]!=1e8)
    {
        cout << "YES" << endl;
        cout << dist[e.first][e.second] << endl;
        path(e);
        string last="";
        int n4 = ans.size();
        forall(i,1,n4)
        {
            if(ans[i].first!=ans[i-1].first)
            {
                if(ans[i].first>ans[i-1].first) last+='D';
                else last+='U';
            }
            else
            {
                if(ans[i].second>ans[i-1].second) last+='R';
                else last+='L';
            }
        }
        cout << last << endl;
        
     }
    
    else cout << "NO" << endl;
    // grid.clear();
    // dist.clear();
    // par.clear();

    return 0;
}