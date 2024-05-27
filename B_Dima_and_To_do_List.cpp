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
    vector<int> arr(n);forall(i,0,n) cin >> arr[i];
    int sum=0;
    int mini=INT_MAX,ind=1;
    for(int i=0;i<k;i++)
    {
        int a=0,sum=0;
        //cout << i << "==" << endl;
        for(int j=0;j<n/k;j++)
        {
            sum+=arr[(i+a)%n];
            //cout << sum << "++" << endl;
            a+=k;
        }
        if(sum<mini)
        {
            mini=sum;
            ind=i+1;
        }
    }
    cout << ind << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}