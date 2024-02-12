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

   int t;
   cin>>t;
   while(t--)
   {
            int n,k;
           
            cin>>n>>k;
            
            ll res=0;
            ll mx=0;
            ll sum=0;
            ll a[n],b[n];

            for(int i=0;i<n;i++)
            {
               cin>>a[i];
            }
            for(int i=0;i<n;i++)
            {
               cin>>b[i];
            }
            for(int i=0;i<min(n,k);i++)
            {
               sum+=a[i];
               mx=max(mx,b[i]);

               ll curr=sum+(k-i-1)*mx;

               if(curr>res)
               {
                  res=curr;
               }
            }

            cout<<res<<endl;

   }

}
