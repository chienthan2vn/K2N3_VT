//BDSO007: Bieu dien so thanh tong cac luy thua cua 2
#include <bits/stdc++.h>
using namespace std;

int SoCachBD (int n, int k){
	if (n == 0)
		return 1;
	if (k == 0)
		return 1;
	
	if (n >= pow(2,k)){
		int current_value = pow(2,k);
		return SoCachBD(n - current_value, k) + SoCachBD(n, k - 1);
	}
	
	else
		return SoCachBD(n, k - 1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int k = log2(n);
		cout << SoCachBD(n, k) << endl;
	}
	return 0;
}