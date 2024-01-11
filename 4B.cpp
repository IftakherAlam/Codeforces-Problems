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
	ll i,j,n,time;
	ll a[35],b[35];

	while(cin>>n>>time)
	{
		ll min_time=0,max_time=0,sum_time=0;
		vector<ll>v;
		for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			min_time+=a[i];
			max_time+=b[i];
			v.push_back(a[i]);
			sum_time+=a[i];
		}
		if(min_time<=time && time<=max_time)
		{
			cout<<"YES\n";

			if(sum_time<time)
			{
				for(i=0;i<n;i++)
				{
					ll df=b[i]-a[i];
					j=1;

					while(j<=df)
					{
						if(sum_time==time)
						{
							break;
						}
						sum_time++;
						v[i]++;
						j++;
					}
				}
			}
			for(i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}

		else
		{
			cout<<"NO\n";
		}

	}
}
