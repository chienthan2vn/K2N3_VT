#include <iostream>
using namespace std;
 
int check(string s)
{
    int a = 0;
    int max1 = 0;
	int n = s.length();

    for (int i = 0; i < n; i++) {
        a += (s[i] == '0' ? 1 : -1);
 
        if (a < 0) a = 0;
        max1 = max(a, max1);
    }
 
    return max1 == 0 ? -1 : max1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
    return 0;
}