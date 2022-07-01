#include<bits/stdc++.h>

using namespace std;

void kq(int n, int k, int a[]){
    int sum = 0;
    int dem = 0;
    int i=0;
   	while(sum < k){
        sum += a[i];
        i++;
        dem++;
    }
    cout << dem-1 << endl;
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)	cin >> a[i];
    sort(a,a+n);
    kq(n,k,a);
    return 0;
}