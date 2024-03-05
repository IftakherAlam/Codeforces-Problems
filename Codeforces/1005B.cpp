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

  string s1,s2;
  cin>>s1>>s2;

  stack<char>str1;
  stack<char>str2;

  for(int i=0;i<s1.size();i++)
  {
   str1.push(s1[i]);
  }
  for(int i=0;i<s2.size();i++)
  {
   str2.push(s2[i]);
  }

  while(!str1.empty() && !str2.empty())
  {
   if(str1.top()!=str2.top())
   {
      break;
   }
   str1.pop();
   str2.pop();
  }

  cout<<str1.size()+str2.size()<<endl;
}
