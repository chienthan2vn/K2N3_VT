#include<bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		double x;
		cin >> n >> x;
		double Xk = 1.0;
		double Ak = 1.0;
		double sum = 0;
		for(int k=1; k<=n; k++)
		{
			Ak *= k;
			Xk *= x;
			sum += float(Xk/Ak);
		}
		cout << fixed << setprecision(3) << sum << endl;
	}
	return 0;
}