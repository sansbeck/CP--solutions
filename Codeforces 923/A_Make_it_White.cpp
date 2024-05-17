
#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--)
      {
        
         int n;
         cin >> n;
         string s;
         cin >> s;
         int st=0,e=0,c=0;
         for(int i=0;i<n;i++)
         {
             if(s[i]=='B')
             {
                 if(c==0)
                 {
                     st=i;
                     c++;
                 }
                 else 
                 {e=i;
                 c++;
                 }
             }
            
         }
         if(c==1) cout << 1 << endl;
         else
          cout << e-st+1 << endl;
         
         
      }
   
   
	return 0;
}
 