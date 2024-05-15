#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        for(int i=0;i<k;i++)
        cout << i+1 << " ";
        for(int i=n;i>=k+1;i--)
        cout << i << " ";
        cout << endl;
        
        
        
    }
    
	return 0;
}
 