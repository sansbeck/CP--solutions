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
    inp(n);
    unordered_map<int,int> home;
    vector<int> a(n),b(n);
    forall(i,0,n)
    {
        cin >> a[i] >> b[i];
        home[a[i]]++;
    }
    forall(i,0,n) cout << n-1 + home[b[i]] << " " << n-1-home[b[i]] << endl;;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   
        solve();
    return 0;
}