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
	
	int t;
	cin>>t;

	while(t--)
	{
		int n,x,k;
		cin>>n>>k>>x;
vector<ll> pre(n+1,0) ;
        ll mx = -1e9 , tmp = 0 ;
        for(int i = 1 ; i <= n ;i ++)
        {
            cin >> pre[i] ;
        }
        sort(pre.begin(),pre.end()) ;
        for(int i = 1 ; i<= n ; i ++)
        {
            pre[i] = pre[i] + pre[i-1] ;
        }
        for(int i = 0 ; i<=k ; i++)
        {
            tmp = pre[n-i] - (2*(pre[n-i]-pre[max(0,n-i-x)])) ;
            mx = max(mx,tmp) ;
        }
        cout << mx << endl;
	}
	
}
