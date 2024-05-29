#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if(n <= 3) cout << "NO\n";
    else {
        map <string ,int> mp;
        for(int i = 0; i  < n - 1; i++) {
            if(i) {
                //cout << mp[s.substr(i,2)] << "=="<< i << endl;
                if(mp.find(s.substr(i,2))!=mp.end()) {
                    if(mp[s.substr(i,2)] < i - 1){
                        cout << "YES\n";
                        return;
                    }
                }
                //mp[s.substr(i,2)] = i;
            }
             if(mp.find(s.substr(i,2))==mp.end())
             mp[s.substr(i, 2)] = i;
        }
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}