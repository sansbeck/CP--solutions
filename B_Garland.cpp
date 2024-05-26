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
    string s1,s2;
    cin >> s1;cin >> s2;
    map<char,int>m,m2;
    forall(i,0,s1.length())m[s1[i]]++;
    forall(i,0,s2.length())m2[s2[i]]++;
    int flag=0,sum=0;
    for(auto i:m2)
    {
        if(m.find(i.first)==m.end())
        {
            flag=1;
            break;
        }
        else sum+=min(m[i.first],i.second);
    }
    if(flag) cout << -1 << endl;
    else cout << sum << endl;

    

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}