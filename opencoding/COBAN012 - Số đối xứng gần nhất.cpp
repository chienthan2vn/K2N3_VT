//COBAN012 - Số đối xứng gần nhất
#include <bits/stdc++.h>
using namespace std;

//check so doi xung
bool check(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
 
// doi so doi xung qua chuoi
string swap(long long n)
{
    string s = "";
    while (n > 0) 
    {
        s += (n % 10 + '0');
        n /= 10;
    }
    return s;
}
 
// 
void result(long long n)
{
    //so duoi
    long long a = n - 1;
    while (check(swap(a)) == false)
    {
        a --;
    }
        
    // so tren
    int b = n + 1;
    while (check(swap(b)) == false)
    {
        b ++;
    }

    //my check
    if(check(swap(n)) == true)
    {
        b = n;
        cout << b;
        return;
    }
 
    // check so doi xung min
    if (abs(n - a) > abs(n - b)) cout << b;
    if (abs(n - a) < abs(n - b)) cout << a;
    if (abs(n - a) == abs(n - b)) cout << a << " " << b;
}
 
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		result(n);
        cout << endl;
	}
	return 0;
}