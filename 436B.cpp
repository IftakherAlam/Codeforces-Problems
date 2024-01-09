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

int main()
{
	Code By Wolf

	int n,m,k;
	cin>>n>>m>>k;

	string a[n];

	for(int i=0;i<n;i++) cin>>a[i];


	vector<int>ck(m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='.') continue;
			if(a[i][j]=='L' && j-i>=0) ck[j-i]++;
			if(a[i][j]=='R'&&j+i<m) ck[i+j]++;
			if(a[i][j]=='U' && i%2==0) ck[j]++;
		}
	}
	for(auto t:ck)
	{
		cout<<t<<' ';
	}
	
}

