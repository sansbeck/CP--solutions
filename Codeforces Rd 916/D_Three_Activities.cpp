#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n],b[n],c[n];
        int maxa1=0,maxa2=0,maxa3=0,maxb1=0,maxb2=0,maxb3=0,maxc1=0,maxc2=0,maxc3=0;
        int inda1,inda2,inda3,indb1,indb2,indb3,indc1,indc2,indc3;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]>maxa1)
            {   maxa3=maxa2;
                inda3=inda2;
                maxa2=maxa1;
                inda2=inda1;
                maxa1=a[i];
                inda1=i;
            }
            else if(a[i]>maxa2)
            {
                maxa3=maxa2;
                inda3=inda2;
                maxa2=a[i];
                inda2=i;
            }
            else if(a[i]>maxa3)
            {
                maxa3=a[i];
                inda3=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            if(b[i]>maxb1)
            {   maxb3=maxb2;
                indb3=indb2;
                maxb2=maxb1;
                indb2=indb1;
                maxb1=b[i];
                indb1=i;
            }
            else if(b[i]>maxb2)
            {
                maxb3=maxb2;
                indb3=indb2;
                maxb2=b[i];
                indb2=i;
            }
            else if(b[i]>maxb3)
            {
                maxb3=b[i];
                indb3=i;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            cin >> c[i];
           if(c[i]>maxc1)
            {   maxc3=maxc2;
                indc3=indc2;
                maxc2=maxc1;
                indc2=indc1;
                maxc1=c[i];
                indc1=i;
            }
            else if(c[i]>maxc2)
            {
                maxc3=maxc2;
                indc3=indc2;
                maxc2=c[i];
                indc2=i;
            }
            else if(c[i]>maxc3)
            {
                maxc3=c[i];
                indc3=i;
            }
        }
        int ans=0;
       int maxa[3]={maxa1,maxa2,maxa3};
       int maxb[3]={maxb1,maxb2,maxb3};
       int maxc[3]={maxc1,maxc2,maxc3};
       int inda[3]={inda1,inda2,inda3};
       int indb[3]={indb1,indb2,indb3};
       int indc[3]={indc1,indc2,indc3};
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              for(int k=0;k<3;k++)
              {
                  if(inda[i]!=indb[j] && indb[j]!=indc[k] && inda[i]!=indc[k])
                  ans = max(ans,maxa[i]+maxb[j]+maxc[k]);
              }
          }
      }
        
        cout << ans << endl;
        
        
        
    }
    
	return 0;
}
 