
// problem link: https://codeforces.com/contest/2132/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int m;
		cin>>m;
		string s1;
		cin>>s1;
		string a;
		cin>>a;

		vector<string>v;

		v.push_back(s);
		int l= a.length();
		int e=0;
		int k=0;
		while(l--)
		{
			if(a[k]=='D')
			{
				v.push_back(string(1,s1[k]));
				k++;
			}
			else
			{

				v.insert(v.begin(), string(1,s1[k]));
				k++;
			}

		}

	 for (const auto &s : v) {
        cout << s;
    }
    cout << endl;
	}
}
