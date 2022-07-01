#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
    cin >> n;
    vector<int> kq;
    for(int i=0; i<n-1; i++){
        int b;
        cin >> b;
        kq.push_back(b);
    }
    int a;
    cin >> a;
    cout << a << endl;
    for(int i=0; i<kq.size(); i++)	cout << kq[kq.size()-i-1] << endl;

	return 0;
}