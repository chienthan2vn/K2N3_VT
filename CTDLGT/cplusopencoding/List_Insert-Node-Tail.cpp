#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> kq;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        kq.push_back(a);
    }
    
    for(int i=0; i<kq.size(); i++)	cout << kq[i] << endl;
}