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
    vector<ll> a(n);
    forall(i,0,n) cin >> a[i];
    ll mini=INT_MAX;
    forall(i,0,n-1)
    {
        ll maxi = max(a[i],a[i+1]);
        mini=min(maxi,mini);
    }
    cout << mini-1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}