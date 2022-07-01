#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ketqua;

void dequy(vector<int> x, int i, int s, int n)
{
	if(i>n || s>n) return;
	if(s==n){
		ketqua.push_back(x);
		return;
	}
	for(int k=i; k<n; k++) {
		if(s*k > n)
		return;
		if(n%k==0){
			x.push_back(k);
			dequy(x, k, s*k, n);
			x.pop_back();
		}
	}
}
void phantich(int n)
{
	vector <int> x;
	x.clear();
	dequy(x, 2, 1, n);
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ketqua.clear();
		phantich(n);
		cout << ketqua.size() << endl;
		for(int i=0; i<ketqua.size(); i++)
		{
			for(int j=0; j<ketqua[i].size(); j++)
			{
				cout << ketqua[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}