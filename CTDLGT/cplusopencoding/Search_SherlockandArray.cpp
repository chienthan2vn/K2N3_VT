#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[1000];
		int sum[1000];
		sum[0] = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			sum[i] = sum[i-1] + a[i];
		}
		int ans = 0;
		for(int i=1; i<=n; i++)
			if(sum[i-1]==sum[n]-sum[i]) ans = 1;
		if(ans > 0) cout << "YES";
		else cout << "NO";
		cout << endl;
		
		
	}
	return 0;
}