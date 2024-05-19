#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll p;
    cin >> p;
    int answ=0;
    forall(i,1,p)
    {
        int flag=0;
       ll ans= i;
       forall(j,1,p-1)
       {
        if((ans-1)%p==0)
        {
            flag=1;
            break;
        }
        ans=(ans*i)%p;
       }
        if (flag==0 && ans%p)answ++;
    }
    cout << answ << endl;
    return 0;
}