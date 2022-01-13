// UOCSO004 - Ước nguyên tố
#include <bits/stdc++.h>
using namespace std;

int check(long long n){ // ham phan tich uoc so nguyen to
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
        int dem = 0;
		while(n%i==0)
		{
			n/=i;
			dem ++;
			if(dem > 1) return 1;
		}
	}
	return 0;
}

int main(){
	unsigned int t;
	cin >>t;
	for(int i=0;i<t;i++){
		long long n;
		cin >> n;
		if(check(n)==1){
			cout<< "YES" <<endl;
		}
		else cout<< "NO" <<endl;
		
	}
	return 0;
}




