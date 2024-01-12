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

string s;
bool check(int n)
{
	if(s[n]=='.'||s[n]==','||s[n]=='!'||s[n]=='?')
	{
		return 1;
	}
	return 0;
}
int main()
{
	Code By Wolf

	

	getline(cin,s);

	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			if(check(i+1)) continue;

			if(s[i+1]!=' ') cout<<" ";
		}

		else if(check(i-1) && s[i]!=' ') 
		{
			cout<<" "<<s[i];
		}

		else
		{
			cout<<s[i];
		}
	}
}
