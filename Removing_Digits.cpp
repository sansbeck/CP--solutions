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
    inp(n);
    int dp[n+1];
    for(int i=0;i<=n;i++)
    {
        if(i==0)dp[i]=0;
        else
        {
            int p=i,maxi=0;
            while(p>0)
            {
                maxi=max(maxi,p%10);
                p/=10;
            }
            dp[i]=maxi>i?1:1+dp[i-maxi];
        }

    }
    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

        solve();
    return 0;
}