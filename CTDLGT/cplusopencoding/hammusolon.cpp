#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

// tra ve luy thua module cho hai so
// duoc bieu dien duoi dang long long
// Duoc su dung boi ham powerStrings();
ll powerLL(ll x, ll n)
{
	ll result = 1;
	while (n) {
		if (n & 1)
			{
				result = (result * x) % MOD;
			}
		n = n / 2;
	
		x = (x * x) % MOD;
	
	}
	return result;
}

ll powerStrings(string sa, string sb)
{
	// Chuyen tu string sang number
	ll a = 0, b = 0;
	//tinh a%mod
	for (int i = 0; i < sa.length(); i++)
		a = (a * 10 + (sa[i] - '0')) % MOD;
	// tinh b % (mod-1)
	for (int i = 0; i < sb.length(); i++)
		b = (b * 10 + (sb[i] - '0')) % (MOD - 1);
	// Bay gio a va b da la dang number
	// Co the tinh toan a^b bang module
	return powerLL(a, b);
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin.ignore();
		string sa,sb;
		cin >> sa >> sb;
		cout << powerStrings(sa, sb) << endl;
	}
	return 0;
}