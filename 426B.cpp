#include <bits/stdc++.h>
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

using namespace std;

void solve()
{
	ll m,n,rows;

	deque<string>grid;

	string a;
	cin>>m>>n;
	fl(i,m)
	{
		if(!i) cin.ignore();

		getline(cin,a);
		grid.push_back(a);
	}
	rows=m;

	while(rows)
	{
		if(rows%2)
		{
			cout<<rows<<endl;
			return ;
		}
		ll l=0, r= rows-1;
		while(l<r)
		{
			if(grid[l]!=grid[r])
			{
				cout<<rows<<endl;
				return;
			}
			l++;
			r--;
		}
		rows/=2;
	}
	cout<<1<<endl;
	return ;
	
}


int main()
{
	Code By Wolf
	
	solve();
}



