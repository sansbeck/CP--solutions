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
    int n ;ll x;
    cin >> n >> x;
    vector<ll> a(n);forall(i,0,n)cin >> a[i];
    sort(a.begin(),a.end());
    vector<ll> pref(n);
    pref[0]=a[0];
    forall(i,1,n)pref[i]=a[i]+pref[i-1];
   
    ll c=0,vali=0;
    ll val=upper_bound(pref.begin(),pref.end(),x)-pref.begin();
    if(val==0) cout << vali << endl;
    else{
        while(val>0)
        {
            vali+= ((x-pref[val-1])/val +1)*val-c;
            c+=(x-pref[val-1])/val +1;
            val--;
        }
        cout << vali << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}