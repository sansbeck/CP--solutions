#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
using namespace std; 
bool check(vector<ll> &a,int mid,int n)
{
    if(mid==0) return 0;
    map<int,int>mp;
    for(int i=0;i<mid;i++) 
    {
        for(int j=0;j<32;j++)
        {
            if((a[i]>>j )&1)
            mp[j]++;
        }
    }
    
    for(int i=0;i<n-mid;i++)
    {
        for(int j=0;j<32;j++)
        {  
            // if((a[i]>>j)&1!=(a[i+k]>>j)&1) 
            if(((a[i]>>j)&1) && !((a[i+mid]>>j)&1))
            {
                if(mp[j]==1) return 0;
                mp[j]--;
            }
            else if(!((a[i]>>j)&1) && ((a[i+mid]>>j)&1))
            {
                if(mp[j]==0) return 0;
                mp[j]++;
            }

        }
    }
     //for(auto i:mp)cout <<i.first<< "++" << i.second << endl;
    return 1;
}
void solve() {
     int n;
    cin >> n;
    vector<ll> a(n);
     for(int i=0;i<n;i++) cin >> a[i];
    int hi=n;
    int low=0;
    int ans=n;
    while(low<=hi)
    {
        int mid=(hi+low)/2;
        if(check(a,mid,n))
        {
            ans=mid;
           hi=mid-1; 
        }
        else low=mid+1;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t;
while(_t--)
        solve();
    return 0;
}