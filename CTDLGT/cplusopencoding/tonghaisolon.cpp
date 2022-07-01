#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string X,Y;
		cin >> X >> Y;
		int result[1000];
		while(X.size()>Y.size())
		{
			Y = "0" + Y;
		}
		while(X.size()<Y.size())
		{
			X = "0" + X;
		}
		int nho = 0;
		int spt = 0;
		for(int i=X.size()-1; i>=0; i--)
		{
			int k = (X[i] - '0') + (Y[i]-'0');
			k = k + nho;
			if(i>0)
			{
				if(k>9)
				{
					k = k -10;
					nho = 1;
				}
				else
				{
					k;
					nho = 0;
				}
				result[spt] = k;
			}
			else
			result[spt] = k;
			spt++;
		}
		for(int i=spt-1; i>=0; i--)
		{
			cout << result[i];
		}
		cout << endl;
	}
	return 0;
}