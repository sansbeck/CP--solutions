#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>>g;
vector<int> vis;
void dfs(int nod,int cmp)
{
    vis[nod]=cmp;
    for(auto i: g[nod])
    {
        if(!vis[i])
        {
            dfs(i,cmp);
        }
    }
    return;
}
void solve()
{
    int n,m,q;
    cin >>n >> m >> q;
    g.resize(n);
    while(m--)
    {
        int a,b;cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    vis = vector<int> (n,0);
    int cmp = 0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i]) 
        {
            cmp++;
            dfs(i,cmp);
        }
    }
    map<int,int> cmpsize;
    for(int i=0;i<n;i++)
        cmpsize[vis[i]]++;
    while(q--)
    {
        int ex;cin >> ex;
        if(ex==1)
        {
            int val;cin >> val;
            cout << cmpsize[vis[val-1]] << endl;
        }
        else
        {
            int aa,bb;
            cin >> aa >> bb;
            if(vis[aa-1]==vis[bb-1]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    
}


int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}