//MATRAN001 - Đường đi lớn nhất
//quy hoach dong
#include<bits/stdc++.h>
using namespace std;
#define min INT_MIN

void dmax()
{
	//Khai bao
	int n, m;
	cin >> n >> m;
	int a[n][m+2];
	for(int i = 0; i < n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	
	//Khai bao them a[i][0], a[i][m] = 0 de chon
	for(int i = 0; i < n; i ++)
	{
		a[i][0] = min;
		a[i][m+1] = min;
	}

	//Result
	//Tinh nguoc tu duoi len, luu gia tri tai vi tri mang luon
	for(int i = 1; i < n; i++)
		for(int j = 1; j <= m; j ++)
			a[i][j] += max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
	
	//Goi bien result = min cua int, luu max vao result va in
	int result = min;
	for(int i = 1; i <= m; i ++)
		if(a[n-1][i] > result)
			result = a[n-1][i];
	cout << result << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		dmax();
	}
	return 0;
}