#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 

ll power(ll a, ll b) {
    ll answer = 1;
    while(b) {
        if(b & 1) answer *= a;
        a = a*a;
        b/= 2;
    }
    return answer;
}
void solve() {
    ll x,y;
    cin >> x >> y;
    ll c =0;
    for(int i=0; i<32 ;i++)
    {
        if(((x>>i)&1) != ((y>>i)&1))
        break;
        else c++;
    }
    cout << power(2,c) << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}