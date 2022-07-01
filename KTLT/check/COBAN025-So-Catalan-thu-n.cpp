#include <iostream>
using namespace std;
// Ham tinh to hop chap k
unsigned long long binomialCoeff(unsigned int n,
								unsigned int k)
{
	unsigned long long result = 1;
	// Tinh chat C(n, k) = C(n, n-k)
	if (k > n - k)
		k = n - k;
	// Tinh gia tri [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
	for (int i = 0; i < k; ++i) {
		result *= (n - i);
		result /= (i + 1);
	}
	return result;
}

unsigned long long catalan(unsigned int n)
{
	// Calculate value of 2nCn
	unsigned long long c = binomialCoeff(2 * n, n);
	// return 2nCn/(n+1)
	return c / (n + 1);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned int n;
		cin >> n;
		cout << catalan(n) << endl;
	}
	return 0;
}

