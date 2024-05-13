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
    string s ;
    cin >> s;
    string s2;
    cin >> s2;
    int zero=0;
    int one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s2[i])
            {
                if(s2[i]=='1')one++;
                else zero++;
            }
        }
        cout << abs(zero-one)+min(zero,one) << endl;
        
    }
    
	return 0;
}
 