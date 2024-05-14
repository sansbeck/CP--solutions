#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double 
#define mod 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    ll n,x,ans=1;
    cin >> x >> n;
    for(ll i=1;i<=x/n;i++)
    {
        if(x%i==0)
        {
            if(i*n<=x)ans=max(i,ans);
            if((x/i)*n<=x)ans=max(i,ans);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}