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

int main()
{
   Code By Wolf

   int n;
   cin>>n;
   int arr[n];
   vector<int>mx;
   int cnt=0;

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   for(int i=0;i<n-1;i++)
   {
      if(arr[i]>=arr[i+1])
      {
         cnt++;
         mx.push_back(arr[i]);
      }
   }

   cout<<cnt+1<<endl;

  mx.push_back(arr[n-1]);

   for(auto x:mx)
   {
      cout<<x<<" ";
   }
}
