#include<bits/stdc++.h>

using namespace std;

void result(int n)
{
	if(n<2)
	{
		cout << 0 << endl;
		return;
	}
	else
	{
		// evenfibo(n) = 4*evenfibo(n-1) + evenfibo(n-2);
		// evenfibo(0) = 0;
		// evenfibo(1) = 2;
		long long evenfibo1 = 0;
		long long evenfibo2 = 2;
		long long sum = evenfibo1 + evenfibo2;
		while(evenfibo2 <= n)
		{
			long long evenfibo3 = 4*evenfibo2 + evenfibo1; 
			if(evenfibo3 > n)
			break;
			
			evenfibo1 = evenfibo2;
			evenfibo2 = evenfibo3;
			sum += evenfibo2;
		}
		cout << sum << endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		result(n);
	}
	return 0;
}
