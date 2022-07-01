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
		if(l%2==0)
		{
			l=l+1;
		}
		if(r%2==0) r=r-1;
		long long sum =0;
		int sosohang = (r-l)/2 +1;
		sum = sosohang*(l+r)/2;
		cout << sum << endl;
	}
	return 0;
}