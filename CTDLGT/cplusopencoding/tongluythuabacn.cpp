#include<bits/stdc++.h>

using namespace std;
// xet 1^n + 2^n +.....+k^n < m
// tinh p^n
int hammu(int p, int n)
{
	if(n==0)
	return 1;
	int x = 1;
	while(n--)
	{
		x*=p;
	}
	return x;
}
// de quy
int socach(int x, int n, int current_num=1, int sum=0)
{
	int result= 0;
	
	int p = hammu(current_num,n);
	while(p+sum<x)
	{
		result+= socach(x,n,current_num+1,sum+p); // sum+p vi chap nhan p
												// current_num +1 de xet so tiep theo
		current_num++;
		
		p = hammu(current_num,n);
	}
	if(p+sum==x)
		result++;
		
		return result;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> m >> n;
		cout << socach(m,n) << endl;
	}
}