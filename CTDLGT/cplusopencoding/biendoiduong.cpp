// Bien doi duong
#include<bits/stdc++.h>

using namespace std;
void result(int a[], int n)
{
	int dem = 0;
	for(int i=1; i<n; i++)
	{
		if(a[i]<0)
		{
			dem++;
		}
	}
	cout << dem << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		int demam = 0;
		int demduong = 0;
		bool check = true;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			if(a[i]==0)
			check = false;
			if(a[i]<0)
			demam++;
			if(a[i]>0)
			demduong++;
		}
		if(check==false)
		cout << -1 << endl;
		else if(demam > demduong)
		cout << demduong << endl;
		else
		cout << demam << endl;
	}
	return 0;
}