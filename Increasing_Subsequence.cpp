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
    vector<int> arr(n);
    forall(i,0,n) cin >> arr[i];
    vector<ll> ans;
    forall(i,0,n)
    {
        if(ans.size()==0 || arr[i]>ans.back())
        {
            ans.push_back(arr[i]);
        }
        else
        {
            auto it = lower_bound(ans.begin(),ans.end(),arr[i]);
            *it=arr[i];
        }
    }
    cout << ans.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}