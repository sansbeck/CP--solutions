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
    string s;
    cin >> s;int len=0;
    ll ans=1;
    forall(i,1,s.length())
    {
        if(s[i-1]-'0'+s[i]-'0'==9)len++;
        else
        {
            if(len!=0 && len%2==0) ans*=(len/2+1);
            len=0;
        }
    }
    if(len!=0 && len%2==0) ans*=(len/2+1);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}