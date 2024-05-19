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
    cin >> s;
    vector<string> ans;
    int st=0,e=0,flag=0,acount=0;
    int chk=0;
    while(e<s.length())
    {
        if(s[e]=='@' && (e==st||acount==1))
        {
            flag=1;
            break;
        }
        else if(s[e]<=122 && s[e]>=97 && acount==0 )
        {
            e++;
        }
        else if(s[e]=='@')
        {
            acount=1;
            e++;
        }
        else if(s[e]<=122 && s[e]>=97 && acount==1 )
        {
            ans.push_back(s.substr(st,e-st+1));
            //cout << s.substr(st,e-st+1) << "==" << endl;
            // s.erase(st,e+1);
            chk=e;
            e++;
            st=e;
            acount=0;
        }
        
    }
    if(e-1!=chk && flag==0)
    { 
        if(ans.size()==0)flag=1;
        else (ans[ans.size()-1]+=s.substr(st,e-st+1));
    }
    if(flag || ans.size()==0) cout << "No solution" << endl;
    else
    {
    forall(i,0,ans.size()) 
    {
      cout << ans[i];
      if(i<ans.size()-1)cout << "," ;
    }
    cout << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}