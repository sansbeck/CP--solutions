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
    ll a,b,k;
    cin >> a >> b >> k;
    int cnt=b-(b/k)*k;
    b=(b/k)*k;
    while(b/k>=a)
    {
        b/=k;
        cnt++;
    }
    cnt+=(b-a);
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}