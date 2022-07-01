#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
	if (n <= 1) return false;
	if (n <= 3 && n>1) return true;
	if (n%2 == 0 || n%3 == 0) return false;

	for (long long i=5; i*i<=n; i=i+6)
		if (n%i == 0 || n%(i+2) == 0)
		return false;

	return true;
}
bool isPossible(long long N)
{
    if (isPrime(N) && isPrime(N - 2))
        return true;
    else
        return false;
}

long long nextPrime(long long N)
{

	if (N < 5)
		return 5;

	long long prime = N;
	bool found = false;
	while (!found) {
		if(prime%2==0)
		prime++;
		if (isPrime(prime) && isPossible(prime))
			return prime;
			else
				prime+=2;
			
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << nextPrime(n) << endl;
	}
	return 0;
}