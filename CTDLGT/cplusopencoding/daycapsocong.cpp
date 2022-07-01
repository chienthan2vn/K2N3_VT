// DAY SO 001
#include<bits/stdc++.h>

using namespace std;

bool check(long long a[], int n)
{
	long long d = a[1] - a[0];
		for(int i=2; i<n; i++)
		{
			if(a[i] - a[i-1] != d)
			{
				return false;
			}
		}
		return true;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	long long a[n];
	bool k = true;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	if(check(a,n)==true)
	cout << "YES";
	else
	cout << "NO";
	cout << endl;	
}
	return 0;
}