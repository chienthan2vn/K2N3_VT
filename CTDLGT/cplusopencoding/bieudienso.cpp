#include <bits/stdc++.h>
using namespace std;
int dem(int n, int k,int m)
{

	if (n == 0)
		return 1;

	if (k == 0)
		return 1;

	if (n >= pow(m, k)) {
		int curr_val = pow(m, k);
		// if thoa man thi thu tiep voi k va de quy tiep voi k-1
		return dem(n - curr_val, k,m)
			+ dem(n, k - 1,m);
	}
	else
		// neu n < m^k thi giam k xuong
		return dem(n, k - 1,m);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
	int n,m;
	cin >> n >> m;
	// tinh so mu lon nhat co the (max of k)
	int k = log2(n);
	cout << dem(n, k,m) << endl;
	}
	return 0;
}
