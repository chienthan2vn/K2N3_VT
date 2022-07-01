#include<bits/stdc++.h>

using namespace std;

void res(int n, int a[]){
    bool c = false;
    sort(a,a+n);
    for(int i=n-1; i>=2; i--){
        for(int j=i-1; j>=1; j--){
            for(int k=j-1; k>=0; k--){
                if(a[k] + a[j] > a[i]){
                    cout << a[k] << " " <<  a[j] <<" " << a[i];
                    c = true;
                    return;
                }
            }
        }
    }
    
    if(!c)	cout << -1;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    res(n,a);
    return 0;
}