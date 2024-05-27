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
    int n;cin >> n;
    vector<int> a(n),b(n);
    forall(i,0,n) {cin >> a[i];b[i]=a[i];}
    sort(b.begin(),b.end());
    int st=0,e=n-1;
    forall(i,0,n)
    {
        if(a[i]==b[i])st++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==b[i])e--;
        else break;
    }int flag=0;
    //cout << st << "++" <<e << endl;
    forall(i,st+1,e+1)
    {
        if(a[i]-a[i-1]>0)
        {
            flag=1;break;
        }
    }
    if(flag==1) cout << "no" << endl;
    else if(st==n) 
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << st+1 << " " << e+1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   
        solve();
    return 0;
}