// C++ program to find number of ways to representing
// a number as a sum of 1's and 2's
#include <bits/stdc++.h>
using namespace std;

// Function to multiply matrix.
void multiply(int F[2][2], int M[2][2])
{
	int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
	int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
	int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
	int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

// Power function in log n
void power(int F[2][2], int n)
{
	if( n == 0 || n == 1)
		return;
	int M[2][2] = {{1,1},{1,0}};

	power(F, n/2);
	multiply(F, F);

	if (n%2 != 0)
		multiply(F, M);
}

/* function that returns (n+1)th Fibonacci number
Or number of ways to represent n as sum of 1's
2's */
int countWays(int n)
{
	int F[2][2] = {{1,1},{1,0}};
	if (n == 0)
		return 0;
	power(F, n);
	return F[0][0];
}

// Driver program
int main()
{
	int n;
    cin >> n;
	cout << countWays(n) << endl;
	return 0;
}