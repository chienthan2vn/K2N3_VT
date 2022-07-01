//BDSO004 Bieu dien so thanh tong K so Fibonacci
#include <bits/stdc++.h>
using namespace std;
// Toi da 42 chu so trong day Fibonacci

int fib[43] = { 0 };
 
void fibonacci()
{
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 43; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}
 
// De quy tìm so cach bieu dien
int rec(int n, int k, int last)
{
    if (k == 0) return (n == 0);
    int sum = 0;
    for (int i = last; i >= 0 and fib[i] * k >= n; i--) {
        if (fib[i] > n)
            continue;
        sum += rec(n - fib[i], k - 1, i);
    }
    return sum;
}
 
int main(){
	int t;
	cin >> t;
	while (t--){
    	fibonacci();
    	int n, k;
    	cin >> n >> k;
    	cout << rec(n, k, 42) << endl;
 	}
    return 0;
}