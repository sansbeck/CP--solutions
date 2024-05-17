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
         int arr[n];
         for(int i=0;i<n;i++) cin >> arr[i];
         int a[26]={0};
         for(int i=0;i<n;i++)
         {  
             for(int j=0;j<26;j++)
             {
                 if(a[j]==arr[i])
                 {
                     char c= 'a'+j;
                     cout << c  ;
                     a[j]++;
                     break;
                 }
             }
             
         }
         cout << endl;
         
      }
   
   
	return 0;
}
 