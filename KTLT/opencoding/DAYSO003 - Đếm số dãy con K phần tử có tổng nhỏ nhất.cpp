//DAYSO003 - Đếm số dãy con K phần tử có tổng nhỏ nhất
//sap xep, bao gom cac so nho nhat, thi so cach se la C(so a[k-1], so a[k-1] trong minimum)
#include <bits/stdc++.h>
using namespace std;
int C(int n, int k) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(n - 1, k - 1) + C(n - 1, k);
}
void minimum(vector<int> a, int n, int k)
{
	int check = 0;
	for (int i = 0; i < k; i++) {
		if(a[i] == a[k-1]) check ++;
	}
	int check2 = check;
	for (int i = k; i < n; i++) {
		if(a[i] == a[k-1]) check2 ++;
	}
	cout << C(check2, check) << endl;
}

int main(){

    int t; cin >> t;
	while(t--) {
		vector<int> a;
		int n, k; cin >> n >> k;
		for(int i=0; i<n; ++i) {
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		minimum(a, n, k);
	}
}