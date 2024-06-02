#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
ll dp[1000001];
ll doit(vector<vector<ll>> &endstar,int i,vector<ll> &endarr)
{
    if(i==0) return endstar[i][2];
    if(i<0)return 0;
    if(dp[i]!=-1) return dp[i];
    ll op1 = doit(endstar,i-1,endarr);
    int lim2 = lower_bound(endarr.begin(),endarr.end(),endstar[i][1])- endarr.begin();
    // cout << endarr[lim2] << "==" << endstar[i][1] << endl;
        if(endarr[lim2]>=endstar[i][1])lim2--;
    ll op2 = endstar[i][2]+ doit(endstar,lim2,endarr);
    return dp[i] = max(op1,op2);

}

void solve() {
    inp(n);
    vector<vector<ll>> endstar(n);
    memset(dp,-1,sizeof(dp));
    ll am,bm,cm;
    forall(i,0,n)
    {
        cin >> am >> bm >> cm;
        endstar[i]={bm,am,cm};
    } 
    sort(endstar.begin(),endstar.end());
    vector<ll> endarr(n);
    forall(i,0,n)endarr[i]=endstar[i][0]; 
    cout <<  doit(endstar,n-1,endarr) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}