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
string s,u,v;
int flag1,flag2;
bool judge(string s, string u, string v)
{
   int pos1=s.find(u);
   if(pos1==-1) return false;

   int pos2=s.find(v,pos1+u.size());
   if(pos2==-1) return false;
   return true;
}
void solve()
{
   cin>>s>>u>>v;

   if(judge(s,u,v)) flag1=1;

   reverse(s.begin(),s.end());

   if(judge(s,u,v)) flag2=1;

   if(flag1&&flag2) cout<<"both\n";
   else if(flag1) cout<<"forward\n";
   else if(flag2) cout<<"backward\n";
   else cout<<"fantacy\n";
}
int main ()
{
   Code By Wolf
   
   int t=1;
   while(t--)
   {
      solve();
   }
}

