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

const int N = 2e5 +1;
int main()
{
   Code By Wolf

   int n, k;
    cin >> n >> k;
 
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
   // for(auto f:a)
   // {
   //    cout<<f.first<<" "<<f.second<<endl;
   // }
    int s = 0;
    vector<int> b(k);
    for (int i = 0; i < k; ++i) {
        s += a[n - 1 - i].first;
        // cout<<s<<endl;
        b[i] = a[n - 1 - i].second;
    }
    cout << s << '\n';
    sort(b.begin(), b.end());
   // for(auto f:b)
   // {
   //    cout<<f<<endl;
   // }
    b[k - 1] = n - 1;
    // cout<<b[2]<<endl;
    int lst = -1;
    for (int x : b) {
      // cout<<lst<<endl;
       cout << x -lst<< " ";
        lst = x;
      // cout<<lst<<endl;
    }
   

} 
