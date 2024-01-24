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
   set<string>c;

   for(int i=0;i<n;++i)
   {
      if(i>0)
      {
         string s;
         cin>>s;
      }

      string s1,s2;

      cin>>s1>>s2;
      reverse(s2.begin(),s2.end());
      vector<string>vs;
      vs.push_back(s1+s2);

      // for(auto x:vs)
      // {
      //    cout<<x<<endl;
      // }
      for(int i=0;i<3;++i)
      {
         vs.push_back(vs.back().substr(1)+vs.back().substr(0,1));
      }
      sort(vs.begin(),vs.end());
      //cout << "Str " << vs[0] << "\n";
      c.insert(vs[0]);
   }
   cout<<c.size()<<endl;
}

