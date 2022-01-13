//TONG003 - Đường đi có tổng lớn nhất
//quy hoach dong
#include<bits/stdc++.h>
using namespace std;
#define min INT_MIN

void dmax()
{
	//Khai bao
	int n, m;
	cin >> n >> m;
	int a[n+2][m];
	for(int i = 1; i <= n; i ++)
		for(int j = 0; j < m; j ++)
			cin >> a[i][j];
	
	//Khai bao them a[i][0], a[i][m] = 0 de chon
	for(int j = 0; j < m; j ++)
	{
		a[0][j] = min;
		a[n+1][j] = min;
	}

	//Result
	//Tinh nguoc tu phai sang trai, luu gia tri tai vi tri mang luon
	for(int j = 1; j < m; j ++)
		for(int i = 1; i <= n; i++)
			a[i][j] += max(a[i-1][j-1],max(a[i][j-1],a[i+1][j-1]));
	
	//Goi bien result = min cua int, luu max vao result va in
	int result = min;
	for(int i = 1; i <= n; i ++)
		if(a[i][m-1] > result)
			result = a[i][m-1];
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