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
    int n,ans;
    cin >> n;
    ans=(n+1)/2;
    cout << ans << endl;
    int s=1,e=3*n;
    while(ans--)
    {
        cout << s << " " << e << endl;
        e-=3;
        s+=3;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}