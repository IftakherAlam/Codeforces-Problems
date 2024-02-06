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
const int N=1e2+10;
const int mod=1e9+7;
map<string,int> a[N];
map<string,int> mp[N];
string t[N];
int get(string s){
   int x=0;
   for(auto y:s){
      x=x*10+y-'0';
   }
   return x;
}
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
   return a.first<b.first;
}

bool cmps(string s, string t)
{
   return s.size()<t.size();
}

void solve(){
   int n,m,k,q;
   cin>>n>>m>>k>>q;
 
   for(int i=1;i<=m;i++){
      string s;
      cin>>s;
   }
   getchar();
   for(int i=1;i<=k;i++){
      string u;
      getline(cin,u);
   
      int j=0;
      while(j<u.size()&&u[j]!=':'){
         j++;
      }
      t[i]=u.substr(0,j);
      int now=j=j+2;
   // cout<<t[i]<<endl;
   // continue;
      while(j<u.size()){
         if(u[j]==' '){
            int l=j+1;
            string p;
            while(l<u.size()&&u[l]!=' '&&u[l]!=','){
               p+=u[l];
               l++;
            }
         // cout<<j<<" ";
         // cout<<u[j]<<' '<<u[j+1];
         // cout<<"get(p)"<<' '<<p<<" ";
         // cout<<u.substr(now,j-now)<<endl;
            a[i][u.substr(now,j-now)]=get(p);
            now=j=l+2;
         }else
         j++;
      }
   }
/* for(int i=1;i<=k;i++){
      cout<<t[i]<<" :";
      for(auto [x,y]:a[i]){
         cout<<x<<" "<<y<<", ";
      }
      cout<<endl;
   }
 */
// return;
   while(q--){
      int now;
      string s;
      cin>>now>>s;
      mp[now][s]++;
      for(int i=1;i<=k;i++){
         int flag=1;
         for(auto [x,y]:a[i]){
            if(mp[now][x]<y) flag=0;
         }
         if(flag==0) continue;
         for(auto [x,y]:a[i]){
            mp[now][x]-=y;
         }
         mp[now][t[i]]++;
      }
   }
 
   for(int i=1;i<=n;i++){
      for(auto u=mp[i].begin();u!=mp[i].end();){
         auto p=u;
         u++;
         if((*p).second==0) mp[i].erase(p);
      }
      cout<<mp[i].size()<<endl;
      for(auto [x,y]:mp[i]){
         cout<<x<<' '<<y<<endl;
      }
   }
}

int main() {
    Code By Wolf
  
  
   solve();
   

     
 }
