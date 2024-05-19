#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
void prime(vector<int> &isprime)
{
    int nu=1000001;
  forall(i,2,1000001)
  {
    if(isprime[i])
    {
        for(int j=2*i;j<nu;j+=i)
        isprime[j]=0;
    }
  }
}
void solve() {
  
    inp(n);
    vector<ll> arr(n);
    forall(i,0,n) cin >> arr[i];
    vector<int> isprime(1000002,1);
    prime(isprime);
    forall(i,0,n)
     {
        if(arr[i]==1) cout << "NO" << endl;
        else{
            ll sq= sqrt(arr[i]);
            // cout << sq*sq << "==" << arr[i] << "++" << isprime[sq] << endl;
            if(sq*sq==arr[i] && isprime[sq])
            { 
            cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
     }



    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}