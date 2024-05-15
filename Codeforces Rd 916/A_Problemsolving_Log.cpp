#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >>n;
    string s;
    cin >> s;
    int alpha[26]={0};
    for(int i=0;i<n;i++)
    {
        alpha[s[i]-'A']++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(alpha[i]>=i+1)
        c++;
    }
    cout <<c << endl;
    }
    
	return 0;
}
 