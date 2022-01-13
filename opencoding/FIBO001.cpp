
#include<bits/stdc++.h>
using namespace std;

int nonFibonacci(int n)
{
	// curr de theo doi so Fibo hien tai
	// number, prev is previous, prevPrev is
	// previous of previous.
	int prevPrev=1, prev=2, curr=3;

	// Dien kien dung so Fibo >0
	while (n > 0)
	{
		// Cong thuc so Fibo don gian
		prevPrev = prev;
		prev = curr;
		curr = prevPrev + prev;

		// (curr - prev - 1) la so cac so
		// non-Fibonacci numbers giua curr
		// and prev.
		n = n - (curr - prev - 1);
	}

	// n bay gio co the la so am. Chac chan rang no
	// becomes positive by removing last added
	// gap.
	n = n + (curr - prev - 1);

	// n bây gio phai là so duong và nho hon hoac bang
	// trong doan current and previous

	// Bây gio thêm n duong vào Fibonacci truoc do
	// n'th non-fibonacci.
	return prev + n;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
	cout << nonFibonacci(n) << endl;
	}
return 0;
}

