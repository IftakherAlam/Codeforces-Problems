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

int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};

int main()
{
   Code By Wolf
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
    
    int t;
    cin>>t;

    while(t--)
      {
      
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        int arr1[m];
        vector<int>l;
        vector<int>r;

        for(int i=0;i<n;i++)
        {
          cin>>arr[i];

          if(arr[i]<k)
          {
            l.push_back(arr[i]);
          }
        }
        for(int i=0;i<m;i++)
        {
          cin>>arr[i];

          if(arr[i]<k)
          {
            r.push_back(arr[i]);
          }
        }

        int s= l.size();

        int s2 = r.size();

        int count1=0;

       for(int i = 0; i < s; i++)
        {
            for(int j = 0; j < s2; j++)
            {
                if(l[i] + r[j] <= k)
                {
                    count1++;
                }
            }
        }
        cout << count1 << endl;
    }



} 
