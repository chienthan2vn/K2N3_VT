//COBAN018 - 2^k = S = N!
//Giai thich: 2^k = S = N! thi k se duoc tinh theo cong thuc:
//k = N/2 + N/4 + N/8 + ... + N/2^a, sao cho N/2^a < 1 thi stop
//tong cac gia tri nguyen trong day se = k
#include <bits/stdc++.h>
using namespace std;

//
long long result(long long n)
{
	long long i = 2, count = 0;

	while(n / i >= 1)
	{
		count += n / i;
		i *= 2;
	}

	return count;
}

int main() 
{
    int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		cout << result(n) << endl;
	}
	return 0;
}