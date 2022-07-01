#include<bits/stdc++.h>

using namespace std;
#define min INT_MIN
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> m >> n;
		int a[m+2][n+2];
		for(int i=1; i<=n; i++)
		{
			a[0][i] = min;
			a[m+1][i] = min;
		}
		for(int i=1; i<=m; i++)
		{
			for(int j=1; j<=n; j++)
			{
				cin >> a[i][j];
			}
		}
		for(int j=2; j<=n; j++)
		{
			for(int i=1; i<=m; i++)
			{
				a[i][j] += max(a[i-1][j-1],max(a[i][j-1],a[i+1][j-1]));
			}
		}
		int result = min;
		for(int i=1; i<=m; i++)
		{
			result = max(result,a[i][n]);
		}
		cout << result << endl;
	}
	return 0;
}