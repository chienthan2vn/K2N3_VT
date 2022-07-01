#include<bits/stdc++.h>
using namespace std;

bool sosanh(long long a, long long b){
    return (a>b);
}
int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++)	cin >> a[i];
    
    sort(a,a+n,sosanh);
    long long sum = 0;
    for(long long i=0; i<n; i++){
        sum += (pow(2,i)*a[i]);
    }
    cout << sum;
    return 0;
}