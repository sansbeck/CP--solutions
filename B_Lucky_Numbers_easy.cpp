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
    int n = s.length();
    if(n%2)n++;
    else{
        string val= "";
        forall(i,0,n/2)val+='7';
        forall(i,0,n/2)val+='4';
        if(s>val)
        {
            n+=2;
        }
    }
    string ans="";
    forall(i,0,n/2)ans+='4';
    forall(i,0,n/2)ans+='7';
    if(ans>s || ans.length()>s.length()) cout << ans  << endl;
    else
    {
        vector<string> perm;
        do{
            perm.push_back(ans);
        }
        while(next_permutation(ans.begin(),ans.end()));
        for(auto i:perm)
        {
            if(i>=s) 
            {
                cout << i << endl;
                break;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}