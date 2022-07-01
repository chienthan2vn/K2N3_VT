#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin >> s;
		int dem = 0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]>='0' && s[i]<='9')
			dem++;
		}
		cout << dem << endl;
	}
	return 0;
}