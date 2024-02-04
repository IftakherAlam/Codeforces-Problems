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
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
   return a.first<b.first;
}

bool cmps(string s, string t)
{
   return s.size()<t.size();
}

// s=codeforces
// n=10
// div=10,5,2,1
// rev=1 10
// rev=1 5
// rev=1 2
// rev= 1 1
// s=rocesfedoc
// rev = 1 1 rocesfedoc
// rev = 1 2 orcesfedoc
// rev = 1 5 secrofedoc
// rev = 1 10 codeforces 

bool visited[5001];
vector<int>adj[5001];
stack<int>st;

void dfs(int i)
{
   if(!visited[i])
   {
      visited[i]=1;
      for(int neigh : adj[i]) dfs(neigh);
   }
}
void dfs1(int i)
{
   if(!visited[i])
   {
      st.push(i);
      visited[i]=1;
      for(int neigh: adj[i]) dfs(neigh);
   }
}
int main() {
    Code By Wolf
   int n,m,s;
   cin>>n>>m>>s;
   s--;

   for(int i=0;i<m;i++)
   {
      int a,b;
      cin>>a>>b;
      --a,--b;
      adj[a].push_back(b);
   }
   dfs(s);
   
   for(int i=0;i<n;i++)
   {
      if(!visited[i]) dfs1(i);
   }  

   memset(visited,0,sizeof(visited));
   int ans=0;
   while(!st.empty())
   {
      int t= st.top();
      st.pop();
      if(!visited[t]) dfs(t),++ans;
   }
   cout<<ans<<endl;
 }
