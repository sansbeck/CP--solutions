#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
ll elcm(ll a ,ll b)
{
 return (a*b)/__gcd(a,b);
}
void solve() {
    inp(n);
    vector<ll> arr(n);
    forall(i,0,n) cin >> arr[i];
    ll val = arr[0];
    forall(i,1,n)
    {
        val=elcm(val,arr[i]);
    }
    ll sum=0;
    vector<ll> xi(n);
    forall(i,0,n)
    {
        xi[i]=val/arr[i];
        sum+=xi[i];
    }
    if(sum>=val) cout << -1 << endl;
    else
    {
        forall(i,0,n) cout << xi[i] << " ";
        cout << endl;
    }



}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}