//COBAN010 - Luỹ thừa dư
//Chia de tri
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll mod = 1e9 + 7;
ll power(ll x, ll n)
{
	int count = 1;
	while(n) {
		if(n % 2) count = count*x%mod;
		n = n/2;
		x = x*x % mod;
	}
	return count;
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
		cout << power(x, n) << endl;
	}
	return 0;
}