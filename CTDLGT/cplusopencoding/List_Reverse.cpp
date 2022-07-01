#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> kq;
		for(int i=0; i<n; i++){
			int b;
			cin >> b;
			kq.push_back(b);
		}
		
		for(int i=0; i<kq.size(); i++)	
        if(i == kq.size()-1)
            cout << kq[kq.size()-i-1];
        else
            cout << kq[kq.size()-i-1] << " ";
		cout << endl;
	}

	return 0;
}