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
    vector<ll>a(n),b(n+1);
    forall(i,0,n)cin >> a[i];
    forall(i,0,n+1) cin >> b[i];
    ll sum=0,mini=1000000000;
    int flag=0;
    forall(i,0,n)
    {
        if((b[n]<=a[i] && b[n]>=b[i])||(b[n]>=a[i] && b[n]<=b[i]))flag=1;
        sum+=abs(a[i]-b[i]);
        mini=min({mini,abs(b[n]-b[i]),abs(b[n]-a[i])});
    }
    if(flag==1)sum++;
    else sum+=mini+1;
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}