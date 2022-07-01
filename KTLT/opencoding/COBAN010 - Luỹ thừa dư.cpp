//COBAN010 - Luỹ thừa dư
//Chia de tri
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e9 + 7;
ll powerLL(ll x, ll n)
{
	ll result = 1;
	while (n) {
		if (n & 1) result = result * x % MOD;
		n = n / 2;
		x = x * x % MOD;
	}
	return result;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin.ignore();
		ll x, n;
		cin >> x >> n;
		cout << powerLL(x, n) << endl;
	}
	return 0;
}