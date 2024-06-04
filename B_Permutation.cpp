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
    int n,k;
    cin >> n >> k;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i+=2)
    {
        arr[i]=i+2;
    }
    for(int i=1;i<2*n;i+=2)
    {
        arr[i]=i;
    }
    int a=0;
    while(k--)
    {
        swap(arr[a],arr[a+1]);
        a+=2;
    }
    forall(i,0,2*n) cout << arr[i] << " ";
    cout << endl;
    

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}