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

void print(string s){cout << s << endl;}
void print(bool x){x ? cout << "yes" << endl : cout << "no" << endl;}
void print(ll x){cout << x << endl;}
void prints(ll x){cout << x << " ";}
void prints(string s){cout << s << " ";}
void print(double x){cout << x << endl;}
void print(int x){cout << x << endl;}


const ll INF = 1e18;

ll n, m, t, k, x, y, a[200005], b[200005], dp[100005], cnt[100005];
string s;
ll X1, Y1, X2, Y2;
int main() {

   cin >> n >> X1 >> Y1 >> X2 >> Y2;
      
      ll ans1 = X1 + X2 + Y1 + Y2;
      ll ans2 = n - X1 + n - X2 + Y1 + Y2;
      ll ans3 = X1 + X2 + n - Y1 + n - Y2;
      ll ans4 = n - X1 + n - X2 + n - Y1 + n - Y2;
      ll ans5 = INF;
      if((X1 == n && X2 == n) || (X1 == 0 && X2 == 0)){
         ans5 = abs(Y2 - Y1);
      } else if((Y1 == n && Y2 == n) || (Y1 == 0 && Y2 == 0)){
         ans5 = abs(X2 - X1);
      }
      
      print(min(ans1, min(ans2, min(ans3, min(ans4, ans5)))));
}
