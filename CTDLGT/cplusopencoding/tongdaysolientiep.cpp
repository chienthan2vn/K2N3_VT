#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long l,r;
		cin >> l >>r;
		long long sum =0;
		int sosohang = (r-l) +1;
		sum = sosohang*(l+r)/2;
		cout << sum << endl;
	}
	return 0;
}