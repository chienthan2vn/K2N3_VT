#include<bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		long long result = 1;
		long long m = sqrt(n);
		for(long long i=2; i<=m; i++)
		{
			if(n%i==0)
			{
				result += i + n/i;
			}
		}
		if(m*m==n)
		result -= m;
		cout << result;
		cout << endl;
	}
	return 0;
}