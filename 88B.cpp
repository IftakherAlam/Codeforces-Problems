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

   int n,m,x;
   cin>>n>>m>>x;

   vector<string>v(n);

   vector<pair<int,int>>shifts;

   for(int i=0;i<n;++i)
   {
      cin>>v[i];
   }

   for(int i=0;i<n;++i)
   {
      for(int j=0;j<m;++j)
      {
         if(v[i][j]=='S')
         {
            shifts.push_back({i,j});
         }

      }
   }
   vector<int>letters(1000);

   for(int i=0;i<n;++i)
   {
      for(int j=0;j<m;++j)
      {
         if(v[i][j]!='S')
         {
            for(pair<int ,int>&p:shifts)
            {
               int def = (p.first-i)*(p.first-i)+(p.second-j)*(p.second-j);

               if(def<=x*x)
               {
                  letters[v[i][j]-'a']=2;
                  break;
               }
            }
            if(letters[v[i][j]-'a']!=2)
            {
               letters[v[i][j]-'a']=1;
            }
         }
      }

   }

   int q,result=0;
   bool is_false = 0;

   cin>>q;

   while(q--)
   {
      char c;
      cin>>c;

      if(c<'a')
      {
         c+=32;

         if((int)shifts.size()==0)
         {
            is_false = true;
         }

         if(letters[c-'a']==1)
         {
            result++;
         }

      }
      if(letters[c-'a']==0)
      {
         is_false=true;
      }

   }
   if(is_false)
   {
      cout<<-1;
   }
   else
   {
      cout<<result<<endl;
   }
}

