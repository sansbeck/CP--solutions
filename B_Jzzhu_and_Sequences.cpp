#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
vector<int> placed;
int ans =0;
void places(string b[8],int r)
{
     if(r==8)
     {
        ans++;
        return;
     }
     forall(i,0,8)
     {
        bool safe= 1;
        forall(ro,0,r)
        {
            int pc=placed[ro];
            if(b[r][i]=='*'||pc==i||abs(i-pc)==abs(ro-r))safe=0;
        }
        if(safe)
        {
            placed.push_back(i);
            places(b,r+1);
            placed.pop_back();
        }
     }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        string b[8];
        forall(i,0,8)cin >> b[i];
        places(b,0);
        cout << ans << endl;
    return 0;
}