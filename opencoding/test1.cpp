//GIAITHUA002 - Giai thừa có n số không ở cuối
#include<bits/stdc++.h>
using namespace std;

long long result(long long n)
{
	if (n==1) return 5;
	long long k = 0;
	while(n > 0) {
		k += 5;
		n --;
		if(k % 25 == 0) {
			n --;
			if(n == 0) break;
		}
	}
	return k;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << result(n) << endl;
	}
	return 0;
}