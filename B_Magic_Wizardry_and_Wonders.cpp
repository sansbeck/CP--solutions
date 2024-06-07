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
    int n, d, l;
    cin >> n >> d >> l;
    vector<int> arr(n);
    int flag=0;
    if(d>0)
    {
        if(n%2)
        {
            if((n/2+1)*l-n/2<d) flag=1;
            else
            {
                for(int i=1;i<n;i+=2)
                {
                    arr[i] = 1;
                }
                int val = ((n/2) + d)/(n/2+1);
                for(int i=0;i<n;i+=2)
                {
                    arr[i]=val;
                }
                int rem= ((n/2) + d)%(n/2+1);
                int a=0;
                while(rem--)
                {
                    arr[a]++;
                    a+=2;
                }
            } 
        }
        else 
        {
            if((n/2)*l-(n/2)<d) flag=1;
            else
            {
                for(int i=1;i<n;i+=2)
                {
                    arr[i] = 1;
                }
                int val = ((n/2) + d)/(n/2);
                for(int i=0;i<n;i+=2)
                {
                    arr[i]=val;
                }
                int rem= ((n/2) + d)%(n/2);
                int a=0;
                while(rem--)
                {
                    arr[a]++;
                    a+=2;
                }
            } 
        }
    }
    else if(d<0)
    {
        if(n%2)
        {
            if(((n/2+1)-(n/2)*l)>d) flag=1;
            else
            {
                for(int i=0;i<n;i+=2)
                {
                    arr[i] = 1;
                }
                int val = ((n/2+1) - d)/(n/2);
                for(int i=1;i<n;i+=2)
                {
                    arr[i]=val;
                }
                int rem= ((n/2+1) - d)%(n/2);
                int a=1;
                while(rem--)
                {
                    arr[a]++;
                    a+=2;
                }
            } 
        }
        else
        {
            if(((n/2)-(n/2)*l)>d) flag=1;
            else
            {
                for(int i=0;i<n;i+=2)
                {
                    arr[i] = 1;
                }
                int val = ((n/2) - d)/(n/2);
                for(int i=1;i<n;i+=2)
                {
                    arr[i]=val;
                }
                int rem= ((n/2) - d)%(n/2);
                int a=1;
                while(rem--)
                {
                    arr[a]++;
                    a+=2;
                }
            } 
        }
    }
    else if(d==0 && n%2==0)
    {
        forall(i,0,n) arr[i]=l;
    }
    else if(d==0 && n%2)
    {
        for(int i=1;i<n;i+=2)arr[i]=l;
        int val= (l*(n/2))/(n/2+1);
        for(int i=0;i<n;i+=2)arr[i]=val;
        int rem = (l*(n/2))%(n/2+1);
        int a=0;
        while(rem--)
        {
            arr[a]++;
            a+=2;
        }
    }
    if(flag) cout << -1 << endl;
    else{
    forall(i,0,n) cout << arr[i] << " ";
    cout << endl;}

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}