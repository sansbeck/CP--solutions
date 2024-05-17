#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--)
      {
        
        int n,m,k;
        cin >> n >> m >> k;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        int a1[k+1]={0};
        int b1[k+1]={0};
        for(int i=0;i<n;i++)
        {   if(a[i]<=k)
            a1[a[i]]++;
          
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]<=k)
            b1[b[i]]++;
        }
        int aw=0,bw=0,com=0,flag=0;
        for (int i=1;i<k+1;i++)
        {
           
            if(a1[i]==0 && b1[i]==0)
            {
                flag=1;
                break;
            }
            else if(a1[i]==0)
            {
                bw++;
            }
            else if(b1[i]==0)
            {
                aw++;
            }
            else 
            {
               com++;
            }
        }
        
        if(k/2 -aw >0) com-=(k/2 -aw);
        if(k/2-bw>0) com-=(k/2-bw);
        if(com>=0 && flag==0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
      }
   
   
	return 0;
}
 