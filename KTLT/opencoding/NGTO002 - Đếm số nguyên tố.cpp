//NGTO002 - Đếm số nguyên tố
#include <bits/stdc++.h>
using namespace std;

int result(int n)
{

	bool a[1000000];
	memset(a, false, sizeof(a));
	int dem = 0;
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if(!a[i])
		{
			for(int j = 2*i; j <= n; j += i)
			{
				a[j] = true;
			}
		}
	}
	
	for(int i = 2; i <=n; i ++)
	{
		if(a[i] == false)
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, m;
		cin >> n >> m;
		cout << result(m) - result(n-1) << endl;
	}
	return 0;
}