#include <bits/stdc++.h>
#define ll long long 
#define forall(i,st,n) for(int  i=st;i<n;i++)
#define ull unsigned long long 
#define ld long double 
#define mod 1000000007
#define endl '\n' 
#define inp(n) int n;cin >> n;
using namespace std; 
double manhat(double x1,double x2,double y2, double vb,double vs)
{
    double ans = double(x1)/vb + sqrt((x2-x1)*(x2-x1)+ y2*y2)/vs;
    //cout <<  x1 << "==" << ans << endl;
    return ans;
}

void solve() {
    int n;
    double vb,vs;
    cin >> n >> vb >> vs;
    vector<double> arr(n);
    forall(i,0,n) cin >> arr[i];
    double xi,yi;
    cin >> xi >> yi;

        double maxi=manhat(arr[1],xi,yi,vb,vs);int optind=1;
        vector<double> distarr;
        for (int i=1;i<n;i++)
        {
          double dist = manhat(arr[i],xi,yi,vb,vs);
          //cout << dist << "==" << endl;
           if(dist<=maxi)
           {
            maxi=dist;
            optind=i;
           }
        }
        
        if(xi<0) cout << 2 << endl;
        else{
        cout << optind+1 << endl;
        }
    
    

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
        solve();
    return 0;
}