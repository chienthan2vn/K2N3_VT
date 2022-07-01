#include<bits/stdc++.h>

using namespace std;
#define MAX 50000
#define mod 10000
void nhan(long long arr[], int &sopt, int i)
{
	long long nho =0;
	for(int k=0; k<sopt; k++)
	{
		nho = arr[k]*i + nho;
		arr[k] = nho%mod;
		nho /= mod;
	}
	while(nho>0)
	{
		arr[sopt++] = nho % mod;
		nho /= mod;
	}
}
void giaithua(long long n)
{
	long long arr[MAX];
	arr[0] = 1;
	int sopt = 1;
	for(int i=1;i<=n; i++)
	{
		nhan(arr,sopt,i);
	}
	for(int i=sopt-1; i>=0; i--)
	{
		if(i<sopt-1 && mod > 10000 && arr[i] <10000) cout << 0;
		if(i<sopt-1 && mod > 1000 && arr[i] <1000) cout << 0;
		if(i<sopt-1 && mod > 100 && arr[i] <100) cout << 0;
		if(i<sopt-1 && mod > 10 && arr[i] <10) cout << 0;
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
		long long n;
		cin >> n;
		giaithua(n);
	}
	return 0;
}