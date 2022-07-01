#include<bits/stdc++.h>
using namespace std;

int timkiemnhiphan(int a[], int start, int end, int x) {
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(a[mid] == x && a[mid-1] != x)
		return mid;
		if(a[mid] < x)
		start = mid + 1;
		else
		end = mid - 1;
	}
	return -1;
}
int main()
{
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		for(int j=0; j<m; j++)
		{
			cin >> b[j];
		}
		for(int j=0; j<m; j++)
		{
			if(timkiemnhiphan(a,0,n-1,b[j])!= -1)
			{
				cout << timkiemnhiphan(a,0,n-1,b[j]) +1 << " ";
			}
			else
				cout << 0 << " ";
		}
	return 0;
}