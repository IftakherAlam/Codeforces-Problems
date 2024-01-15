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
int a[2],b[2];

bool check(int a,int b)
{
	return (b>=(a-1) && b<=(2*a+2));
}
bool solve()
{
	cin>>a[0]>>a[1]>>b[0]>>b[1];

	if(check(a[0],b[1])) return true;

	if(check(a[1],b[0])) return true;

	return false;
}

int main()
{
	Code By Wolf
	
	cout<<(solve( ) ? "YES":"NO")<<endl;
	
}
