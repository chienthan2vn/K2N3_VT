#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll mod = 1e9 + 7;

ll powerLL(ll x, ll n)
{
	ll result = 1;
	while (n) {
		if (n & 1)
			result = result * x % mod;
		n = n / 2;
		x = x * x % mod;
	}
	return result;
}

ll powerStrings(string sa, string sb)
{
	ll a = 0, b = 0;

	for (int i = 0; i < sa.length(); i++)
		a = (a * 10 + (sa[i] - '0')) % mod;

	for (int i = 0; i < sb.length(); i++)
		b = (b * 10 + (sb[i] - '0')) % (mod - 1);

	return powerLL(a, b);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s1,s2;
		cin >> s1 >> s2;
		cout << powerStrings(s1, s2) << endl;
	}
	return 0;
}