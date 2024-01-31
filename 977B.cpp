#include <bits/stdc++.h>
#include <bitset>
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
#define mod 1000000007LL

using namespace std;

int main()
{
	Code By Wolf

   ll n;
   cin>>n;
   string s;
   cin>>s;
   unordered_map<string,ll>m;
   int cnt=0;
   string ans;

   for(int i=1;i<n;i++)
   {
   	 string temp= s.substr(i-1,2);
   	 m[temp]++;
   	 if(m[temp]>cnt)
   	 {
   	 	ans=temp;
   	 	cnt=m[temp];
   	 }
   }
   cout<<ans<<endl;
}
