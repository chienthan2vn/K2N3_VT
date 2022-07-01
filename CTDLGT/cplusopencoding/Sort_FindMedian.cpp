#include<bits/stdc++.h>

#define for(i,n) for(int i=0; i<n; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(i,n) cin >> a[i];
    sort(a,a+n);
    cout << a[n/2] << endl;
    return 0;
}