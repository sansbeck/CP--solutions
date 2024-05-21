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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string beg=s;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    if(s.size()==1) cout << s << endl;
    else
    {
        string str="";
        str.push_back(s[0]);
        forall(i,1,s.length())
        {
            if(s[i]!=s[i-1])str.push_back(s[i]);
        }
        unordered_map<char,char>m;
        string ans="";
        forall(i,0,str.length())m[str[i]]=str[str.length()-1-i];
        forall(i,0,beg.length())
        {
            ans.push_back(m[beg[i]]);
           
        }
        cout << ans << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}