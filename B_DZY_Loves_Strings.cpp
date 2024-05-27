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
    string s;cin >> s;
    int k,sum=0;cin >> k;
    int val[26],maxi=0;
    forall(i,0,26){cin >> val[i];maxi=max(maxi,val[i]);}
    forall(i,0,s.length()) sum+=(i+1)*val[s[i]-'a'];
    forall(i,s.length(),s.length()+k)sum+=(i+1)*maxi;
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}