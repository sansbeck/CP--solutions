#include <bits/stdc++.h>
#define ll long long 
using namespace std; 
int n,m;
vector<vector<int>> g;
vector<int> vis;
void dfs(int i,int cnt)
{
    vis[i]=cnt;
    for(auto j : g[i])
    {
        if(!vis[j]) dfs(j,cnt);
    }
    return;
}
void solve()
{
    cin >> n >> m;
    g.resize(n);
    vis = vector<int>(n,0);
    while(m--)
    {
        int x,y;cin >> x >> y;
        g[x-1].push_back(y-1);
        g[y-1].push_back(x-1);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i,cnt);
        }
    }
    cout << cnt-1 << endl;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
       // cout << vis[i] << " " << i+1 << endl;
        v[i] = make_pair(vis[i],i+1);

    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
       // cout << v[i].first << endl;
        if(v[i].first!=v[i-1].first) cout << v[i-1].second << " " << v[i].second  << endl;
    }

}
 int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
    return 0;
}