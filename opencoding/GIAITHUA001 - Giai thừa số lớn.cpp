//GIAITHUA001 - Giai thừa số lớn
#include<bits/stdc++.h>
using namespace std;
void nhan(int arr[], int &sopt, int &i)
{
	long long nho =0;
	for(int k=0; k<sopt; k++)
	{
		nho = arr[k]*i + nho;
		arr[k] = nho%10000;
		nho /= 10000;
	}
	while(nho>0)
	{
		arr[sopt++] = nho % 10000;
		nho /= 10000;
	}
}
void giaithua(int n)
{
	int arr[50000];
	arr[0] = 1;
	int sopt = 1;
	for(int i=1;i<=n; i++)
	{
		nhan(arr,sopt,i);
	}
	for(int i=sopt-1; i>=0; i--)
	{
		if(i<sopt-1 && 10000 > 10000 && arr[i] <10000) cout << 0;
		if(i<sopt-1 && 10000 > 1000 && arr[i] <1000) cout << 0;
		if(i<sopt-1 && 10000 > 100 && arr[i] <100) cout << 0;
		if(i<sopt-1 && 10000 > 10 && arr[i] <10) cout << 0;
		cout << arr[i];
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int k;
		cin >> k;
		giaithua(k);
	}
	return 0;
}
