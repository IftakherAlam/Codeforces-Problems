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
		int n,l=1,r=1e9;
		cin>>n;
		set<int>s;

		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			if(a==1) l=max(l,b);
			if(a==2) r=min(r,b);
			if(a==3) s.insert(b);
		
		}

		if(r<l)
		{
			cout<<"0\n";
			continue;
		}

	int ans= r-l+1;

	for(auto &i:s) ans-=(i>=l && i<=r);

	cout<<ans<<endl;
	}
	
}
