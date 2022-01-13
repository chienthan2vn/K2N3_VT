//COBAN004 - Số đối xứng
#include <bits/stdc++.h>
using namespace std;

long long sdx(int n)
{
	return (9 * pow(10, (n - 1) / 2));
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		cout << sdx(n) << endl;
	}
	return 0;
}