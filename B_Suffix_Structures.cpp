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
    string s,t;
    cin >> s;cin >> t;
    int faut=0,ft=0;
    map <char,int>m;
    forall(i,0,s.length())m[s[i]]++;
    forall(i,0,t.length())
    {
        m[t[i]]--;
        if(m[t[i]]<0)
        { 
            ft=1;
            cout << "need tree" << endl;break;
        }
    }
    if(ft==0)
    {
        int st=0,tt=0;
        while(st<s.length() && tt<t.length())
        {
            if(s[st]==t[tt]){st++;tt++;}
            else st++;
        }
        if(tt==t.length())
        {
            faut=1;
            cout << "automaton" << endl;
        }
        if(faut==0 && s.length()>t.length())
        {
            cout << "both" << endl;
        }
        else if(faut==0 && s.length()==t.length())
        {
            cout << "array" << endl;
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}