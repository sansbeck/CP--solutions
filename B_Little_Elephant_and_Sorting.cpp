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
    if(n==1) cout << 0 << endl;
    else
    {
      ll sum=0,maxi=0,temp=arr[0];
      forall(i,1,n)
      {
        if(arr[i]<arr[i-1])
        {
            maxi=max(maxi,temp-arr[i]);
        }
        else
        {
            temp=arr[i];
            sum+=maxi;
            maxi=0;
        }
        //cout << temp << "==" << arr[i] << endl;
      }
      if(maxi)sum+=maxi;
      cout << sum << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}