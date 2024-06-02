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
    int a,b;
    cin >> a >> b;
    int dp[a+1][b+1];
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==j)dp[i][j]=0;
            else
            {
                int ans= 1e8;
                for(int h=1;h<i;h++)
                {
                    ans=min(ans,1+dp[i-h][j]+dp[h][j]);
                }
                for(int d=1;d<j;d++)
                {
                    ans=min(ans,1+dp[i][j-d]+dp[i][d]);
                }
                dp[i][j]=ans;
            }
        }
    }
    cout << dp[a][b] << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}