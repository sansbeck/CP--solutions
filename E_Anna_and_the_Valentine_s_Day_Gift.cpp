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
    int n,m;cin >> n >> m;
    string s;vector<int> zero;
    int ans=0,c=0;
    forall(i,0,n)
    {
        cin >> s;
        ans+=s.length();
          c=0;
            for(int j=s.length()-1;j>=0;j--)
            {
            if(s[j]=='0')c++;
            else break;
            }
            zero.push_back(c);
        
    }
    sort(zero.begin(),zero.end());
    for(int i=n-1;i>=0;i-=2)
    {
        ans-=zero[i];
    }
    if(ans>=m+1) cout <<"Sasha" << endl;
    else cout << "Anna" << endl;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}