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
    double l,d,v,g,r;
    cin >> l >> d >> v >> g >> r;
    double rtime=d/v,basetime=l/v;
    ll tempt =floor(rtime/(g+r));
    //cout << rtime << "+" << g+r << "++" << tempt << endl;
    if(rtime>=(tempt+1)*g+tempt*r && rtime<=(tempt+1)*g+(tempt+1)*r)
    {
        //cout << basetime << "+=" << ((tempt+1)*g+(tempt+1)*r) - rtime << endl;
        basetime += ((tempt+1)*g+(tempt+1)*r) - rtime;
    }
    cout << setprecision(10) <<  basetime << endl;


}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int _t; cin >> _t;
// while(_t--)
        solve();
    return 0;
}