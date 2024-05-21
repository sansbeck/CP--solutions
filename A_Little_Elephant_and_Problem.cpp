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
    inp(n);int cnt=0;vector<ll> arr(n),ar2(n);
    forall(i,0,n) cin >> arr[i];
    ar2=arr;sort(arr.begin(),arr.end());
    forall(i,0,n)if(arr[i]!=ar2[i])cnt++;
    string ans=(cnt==0||cnt==2)?"YES":"NO";
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}