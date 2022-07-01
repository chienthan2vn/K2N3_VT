#include<bits/stdc++.h>

using namespace std;
bool snt(long long n)
{
	if(n<2)
	return false;
	if(n%2==0 || n%3==0)
	{
		return false;
	}
	for(long long i=5; i<=sqrt(n); i+=2)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
void result(long long L, long long R)
{
	if(R%2==0)
	{
		R--;
	}
	for(long long i=R; i >= L; i-=2)
	{
		if(snt(i)==true)
		{
			cout << i ;
			break;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long L,R;
		cin >> L >> R;
		result(L,R);
		cout << endl;
	}
	return 0;
}
