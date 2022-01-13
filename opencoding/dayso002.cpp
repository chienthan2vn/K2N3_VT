#include <bits/stdc++.h>
using namespace std;

int count(int *a, int n, int k, int s, int st = 0, int i = 0, int c = 0)
{
	if (i == k) return (c == s);
	int x = 0;
	for (int j = st; j <= n-k+i; ++j)
	{
		x += count(a, n, k, s, j+1, i+1, c+a[j]);
	}
	return x;
}
int main()
{
    int t; cin >> t;
	while(t--) {
        int a[30], n, k, s, st = 0, i = 0, c = 0;
		cin >> n >> k >> s;
		for(int j=0; j<n; ++j) {
			cin >> a[j];
		}
		cout << count(a, n, k, s, st, i, c) << endl;
	}
}