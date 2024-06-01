#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 

void solve() {
    int n,x;cin >> n >> x;
    vector<int> val(n);
    forall(i,0,n)cin >> val[i];
    int dp[n][x+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if(j==0)dp[i][j]=1;
            else
            {
                int first = val[i]>j?0:dp[i][j-val[i]]%mod;
                int sec = i==0?0:dp[i-1][j]%mod;
                dp[i][j]=(first+sec)%mod;
            }
        }
    }
    cout << dp[n-1][x] << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}