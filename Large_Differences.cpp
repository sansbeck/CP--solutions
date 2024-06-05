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
    vector<int> a(n);
    forall(i,0,n) cin >> a[i];
    if(n==1) cout << k << endl;
    else if(n==2) cout << max({abs(a[0]-a[1]),max(abs(k-a[0]),abs(1-a[0])),max(abs(k-a[1]),abs(1-a[1]))})<< endl;
    else
    {
        ll sum=0;
        ll maxi=0,maxind=1,maxind2=1,maxi2=0;
        for(int i=1;i<n-1;i++)
        {   
            
            if(abs(k-a[i-1])+abs(k-a[i+1])-abs(a[i]-a[i-1])-abs(a[i]-a[i+1])>maxi)
            {
                maxi=abs(k-a[i-1])+abs(k-a[i+1])-abs(a[i]-a[i-1])-abs(a[i]-a[i+1]);
                maxind=i;
            }
        }
        if(abs(k-a[1])-abs(a[0]-a[1])>maxi)
        {
            maxi=abs(k-a[1])-abs(a[0]-a[1]);
            maxind=0;
        }
        if(abs(k-a[n-2])-abs(a[n-1]-a[n-2])>maxi)
        {
            maxi=abs(k-a[n-2])-abs(a[n-1]-a[n-2]);
            maxind=n-1;
        }

        for(int i=1;i<n-1;i++)
        {   
            
            if(abs(1-a[i-1])+abs(1-a[i+1])-abs(a[i]-a[i-1])-abs(a[i]-a[i+1])>maxi2)
            {
                maxi2=abs(1-a[i-1])+abs(1-a[i+1])-abs(a[i]-a[i-1])-abs(a[i]-a[i+1]);
                maxind2=i;
            }
        }
        if(abs(1-a[1])-abs(a[0]-a[1])>maxi2)
        {
            maxi2=abs(1-a[1])-abs(a[0]-a[1]);
            maxind2=0;
        }
        if(abs(1-a[n-2])-abs(a[n-1]-a[n-2])>maxi2)
        {
            maxi2=abs(1-a[n-2])-abs(a[n-1]-a[n-2]);
            maxind2=n-1;
        }
       // cout << maxi << "==" << maxi2 << endl;
        // if(maxi>maxi2) a[maxind]=k;
        // else if(maxi2>maxi)a[maxind2]=1;
        
        forall(i,1,n)sum+=abs(a[i]-a[i-1]);
       cout << sum+max(maxi,maxi2) << endl;

    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}