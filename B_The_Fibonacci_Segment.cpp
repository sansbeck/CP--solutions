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
    vector<ll> arr(n);
    forall(i,0,n) cin >> arr[i];
    int e=2,st=0,len=2;
    if(arr.size()==1||arr.size()==2)cout << arr.size()<< endl;
    else
    {
        while(e<arr.size())
        {
            if(arr[e]==arr[e-1]+arr[e-2])
            e++;
            else{
                len=max(len,e-st);
                st=e-1;
                e++;
            }
        }
        len=max(len,e-st);
        cout << len << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}