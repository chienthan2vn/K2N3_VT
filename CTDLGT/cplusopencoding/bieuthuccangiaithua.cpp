#include<bits/stdc++.h>

using namespace std;


int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		float Sk = 0;
		float Ak = 1.0;
		for(int i=1; i<=n; i++)
		{
			Ak *= i;
			Sk = pow(Ak+Sk,1.0/(i+1));
		}
		cout << setprecision(3) << fixed << Sk;
		cout << endl;
	}
	return 0;
}