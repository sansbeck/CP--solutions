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
   vector<double> rad(n);
   forall(i,0,n) cin >> rad[i];
   sort(rad.begin(),rad.end());
   double ans=0;
   double pi = 2*acos(0.0);
   for(int i=n-1;i>0;i-=2)
   {
        ans+=(pi)*(rad[i]*rad[i]-rad[i-1]*rad[i-1]);
   }
   if(n%2) ans+=(pi)*(rad[0])*(rad[0]);
   cout << setprecision(12) << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}