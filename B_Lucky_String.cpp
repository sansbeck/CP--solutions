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
    
    if(n>3)
    {
        for(int i=0;i<n/4;i++)
        {
            cout << "abcd" ;
        }
    }
    n%=4;
    if(n==1) cout << "a" << endl;
    else if(n==2) cout << "ab" << endl;
    else if(n==3) cout << "abc" << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}