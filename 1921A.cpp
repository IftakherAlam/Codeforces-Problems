#include <bits/stdc++.h>
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

using namespace std;

#include <iostream>
#include <string>

using namespace std;
void solve()
{
   int n=4;

   vector<pair<int,int>>a(n);

   int mn=1001, mx=-1001;

   for(int i=0;i<n;i++)
   {
      cin>>a[i].first>>a[i].second;

      mn= min(mn,a[i].first);
      mx=max(mx,a[i].first);


   }

   cout<<(mx-mn)*(mx-mn)<<endl;
}

int main() {
    Code By Wolf
    int t;
    cin >> t;

    while(t--)
    {
      solve();
    }

    return 0;
}
