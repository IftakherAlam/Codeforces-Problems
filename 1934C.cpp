#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n-1;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Wolf cout.tie(NULL);

int query (int x,int y)
{
  cout<<"? "<<x<<" "<<y<<endl;
  int q;
  cin>>q;
  return q;
}

signed main()
{
   Code By Wolf
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
    int tt; cin >> tt;
 
    while(tt--) {
        int n, m, finale = 0; cin >> n >> m;
 
        int q1 = query(1, 1);
 
        int xCord = min(n, 1 + q1);
        int yCord = min(m, 1 + q1);
 
        int q2 = query(xCord, q1 - xCord + 2);
        int q3 = query(q1 - yCord + 2, yCord);
 
        if(xCord - q2 / 2 <= n && q1 - xCord + 2 + q2 / 2 <= m && q2 % 2 == 0) {
            int q4 = query(xCord - q2 / 2, q1 - xCord + 2 + q2 / 2);
            finale = (q4 != 0);
        } else finale = 1;
        
        if(finale == 0) cout << "! " << xCord - q2 / 2 << " " << q1 - xCord + 2 + q2 / 2 << endl;
        else cout << "! " << q1 - yCord + 2 + q3 / 2 << " " << yCord - q3 / 2 << endl;
    }
} 
