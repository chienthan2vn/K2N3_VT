// NGUYENTO004: UOC NGUYEN TO LON NHAT CUA N
#include <bits/stdc++.h>
using namespace std;

unsigned long long int Uoc_NT_Max (unsigned long long int n){
	// gan mot gia tri thap nhat
	long long uoc_max = -1;
	
	while (n % 2 == 0){
		uoc_max = 2;
		n = n / 2;
	}
	
	while (n % 3 == 0){
		uoc_max = 3;
		n = n / 3;
	}
	
	for (int i = 5; i <= sqrt(n); i+=6){
		while (n % i == 0){
			uoc_max = i;
			n = n / i;
		}
		while (n % (i + 2) == 0){
			uoc_max = i + 2;
			n = n / (i+2);
		}
	}
	
	if (n > 4)
		uoc_max = n;
	
	return uoc_max;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		unsigned long long int n;
		cin >> n;
		cout << Uoc_NT_Max(n) << endl;
	}
	return 0;
}