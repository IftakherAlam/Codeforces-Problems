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




int main ()
{
   Code By Wolf
     int n;
    cin>>n;
   int arr[n+1];
   for(int i=1;i<=n;i++)
      {
         cin>>arr[i];
      }
   int i=1,j=n;

   while(i<=n && arr[i]==i) i++;
   while(j>0 && arr[j]==j) j--;

   if(i<j && (arr[i]==j && arr[j]==i ))
   {
      cout<<i<<" "<<j<<endl;
   }
   else
   {
      cout<<"0 0"<<endl;
   }
  
}

