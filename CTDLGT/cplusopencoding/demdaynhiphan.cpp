// doi nhi phan sang thap phan roi tinh
#include<bits/stdc++.h>

using namespace std;
unsigned long long result(string s, int n)
{
	long long result = 0;
	for (int i = 0; i <n; i++) {
        if (s[i] == '1')
            result |= 1<<(n-1-i);
    }
	return result;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		int n;
		cin >> n;
		string s1;
		cin >> s1;
		string s2;
		cin >> s2;
		unsigned long long m = result(s2,n);
		unsigned long long k = result(s1,n);
		if(m==k) cout << 0 << endl;
		else if(m>k)
		cout << m-k-1 << endl;
		else
		cout << k-m-1 << endl;
	}
	return 0;
}