#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(long long x)
{
    long long s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(long long n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

void result(long long n)
{
		bool check = false;
		for(int i=0; i<=n-i; i++)
		{
			if(isFibonacci(i)==true && isFibonacci(n-i)==true)
			{
				
				check = true;
				cout << i << " " << n-i;
				break;
			}
		}
		if(check == false)
		cout << -1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		result(n);
		cout << endl;
	}
	return 0;
}
