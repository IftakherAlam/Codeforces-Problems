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

char s[4][4];
int a, b;
 
bool check3()
{
 
	if (s[0][1] == 'X' && s[0][2] == 'X' && s[0][0] == 'X') return true;
	if (s[1][1] == 'X' && s[1][2] == 'X' && s[1][0] == 'X') return true;
	if (s[2][1] == 'X' && s[2][2] == 'X' && s[2][0] == 'X') return true;
	if (s[0][0] == 'X' && s[1][0] == 'X' && s[2][0] == 'X') return true;
	if (s[0][1] == 'X' && s[1][1] == 'X' && s[2][1] == 'X') return true;
	if (s[0][2] == 'X' && s[1][2] == 'X' && s[2][2] == 'X') return true;
	if (s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X') return true;
	if (s[2][0] == 'X' && s[1][1] == 'X' && s[0][2] == 'X') return true;
	return false; 
}

bool check2()
{
	if (s[0][1] == '0' && s[0][2] == '0' && s[0][0] == '0') return true;
	if (s[1][1] == '0' && s[1][2] == '0' && s[1][0] == '0') return true;
	if (s[2][1] == '0' && s[2][2] == '0' && s[2][0] == '0') return true;
	if (s[0][0] == '0' && s[1][0] == '0' && s[2][0] == '0') return true;
	if (s[0][1] == '0' && s[1][1] == '0' && s[2][1] == '0') return true;
	if (s[0][2] == '0' && s[1][2] == '0' && s[2][2] == '0') return true;
	if (s[0][0] == '0' && s[1][1] == '0' && s[2][2] == '0') return true;
	if (s[2][0] == '0' && s[1][1] == '0' && s[0][2] == '0') return true; 
	return false;
}

bool check1()
{
	if(a-b > 1) return true;
	if(a<b) return true;

	if(check2() && check3()) return true;

	if(check2() && a>b) return true;
	if(check3() && a==b) return true;

	return false;
}
int main()
{
	Code By Wolf
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>s[i][j];
			if(s[i][j]=='X') a++;

			else if(s[i][j]=='0') b++;
		}
	}

	if(check1())
	{
		puts("illegal");
		return 0;
	}
	if(check2())
	{
		puts("the second player won");
		return 0;
	}
	if(check3())
	{
		puts("the first player won");
		return 0;
	}

	if(a==b)
	{
		puts("first");
		return 0;
	}

	if(a+b==9)
	{
		puts("draw");
		return 0;
	}

	if(a-b==1)
	{
		puts("second");
		return 0;
	}
	
} 
