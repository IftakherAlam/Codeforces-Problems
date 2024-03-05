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
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
    int tt; 
    cin >> tt;
 
    while(tt--) 
    {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      int l = s.length();
      int flag=0;

      for(int i=0;i<l/2;i++)
      {
        if(s[i]==s[l-i-1]) continue;
        if(s[i]>s[l-i-1])
        {
          flag=1;
        }
        else
        {
          break;
        }
      }
      string r=s;
      reverse(s.begin(),s.end());
     if(flag==0)
     {
      cout<<r<<endl;
     }
     else
     {
      cout<<s<<r<<endl;
     }
   }

} 
