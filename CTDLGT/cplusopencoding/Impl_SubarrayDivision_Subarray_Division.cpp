#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)  cin >> a[i];
    int d,m;
    cin >> d >> m;
    vector<int> kq;
    for(int i=0; i<n-m+1; i++){
        int luu = 0;
        for(int j=0; j<m; j++){
            luu += a[i+j];
        }
        kq.push_back(luu);
    }
    int dem = 0;
    for(int i=0; i<kq.size(); i++)  //cout << kq[i] << " ";
    {
        if(kq[i] == d)  dem++;
    }
    cout << dem << endl;
    return 0;
}