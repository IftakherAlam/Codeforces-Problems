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
// calculate time using laptop and without using laptop
void cal_time(int a[],int b[],int c[],int d[],int n)
{
   for(int i=0;i<n-1;i++)
   {
      c[i]=b[i]-a[i];
      d[i]=a[i+1]-b[i];
   }
   c[n-1]=b[n-1]-a[n-1];
}
// calculate power use laptop
void cal_power_use(int p1,int c[],int n)
{
   for(int i=0;i<n;i++)
   {
      c[i]*=p1;
   }
}
// calculate power without using laptop
void cal_power_without_use(int p1,int p2,int p3,int t1, int t2, int n, int d[])
{
   for(int i=0;i<n-1;i++)
   {
      if(t1+t2<=d[i])
      {
         d[i]=t1*p1+t2*p2+p3*(d[i]-t1-t2);
      }
      else if(d[i]<(t1+t2)&&d[i]>=t1)
      {
         d[i]=t1*p1+(d[i]-t1)*p2;
      }
      else
      {
         d[i]=d[i]*p1;
      }
   }
}
int cal_total_power(int a[],int b[],int n)
{
   int sum=a[n-1];
   for(int i=0;i<n-1;i++)
   {
      sum+=a[i]+b[i];
   }
   return sum;
}

int main ()
{
   Code By Wolf
     
   int n,p1,p2,p3,t1,t2;
   int l[100],r[100];
   int time1[100],time2[100];
   cin>>n>>p1>>p2>>p3>>t1>>t2;

   for(int i=0;i<n;i++)
   {
      cin>>l[i]>>r[i];
   }

   cal_time(l,r,time1,time2,n);
   cal_power_use(p1,time1,n);
   cal_power_without_use(p1,p2,p3,t1,t2,n,time2);
   cout<<cal_total_power(time1,time2,n);
   return 0;

}



