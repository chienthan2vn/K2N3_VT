//NGTO006 - Tìm số đặc biệt lớn nhất
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

long long uocntmax(ull n)
{
	while(n % 2 == 0)
	{
		n=n/2;
	}
	for(int i = 3; i <= sqrt(n); i = i + 2)
	{
		while(n % i == 0)
		{
			n /= i;
		}
	}

	return n;
}
void result(long long n)
{
	if(uocntmax(n) > sqrt(n))
		cout << n << endl;
	else
	result(n-1);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		result(n);
	}
	return 0;
}
