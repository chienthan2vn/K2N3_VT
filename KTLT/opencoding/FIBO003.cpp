#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(isFibonacci(n+1)==true)
		cout << n+2;
		else
		cout << n+1;
		cout << endl;
	}
}
