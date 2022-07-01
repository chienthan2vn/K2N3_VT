#include<bits/stdc++.h>

using namespace std;
vector<long long> kq;
vector<long long> phantich(long long n){
	long long dem = 0;
	while(n%2==0){
		n/=2;
		dem++;
	}
	if(dem > 0){
		kq.push_back(2);
		kq.push_back(dem);
	}
	for(long long i=3; i<=sqrt(n); i+=2){
		dem = 0;
		while(n%i==0){
			n/=i;
			dem ++;
		}
		if(dem > 0){
			kq.push_back(i);
			kq.push_back(dem);
		}
	}
	if(n > 2){
		kq.push_back(n);
		kq.push_back(1);
	}
	return kq;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector<long long> luu = phantich(n);
		cout << luu.size()/2 <<endl;
		for(long long i=0; i<luu.size(); i+=2){
			cout << luu[i] << " " << luu[i+1] << endl;
		}
		kq.clear();
	}
	return 0;
}