#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define inp(n) int n;cin >> n;
#define out(n) cout << n << '\n';
#define mod 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    inp(n);
    int arr[n];
    forall(i,0,n)cin >> arr[i];
    sort(arr,arr+n);int c=1,maxi=0;
    forall(i,1,n)
    {
        if(arr[i]==arr[i-1])c++;
        else{maxi=max(c,maxi);c=1;}
    }
    maxi=max(maxi,c);
    out(maxi);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        solve();
    return 0;
}