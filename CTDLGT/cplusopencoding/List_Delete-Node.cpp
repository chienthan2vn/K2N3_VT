#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)	cin >> a[i];
    int b;
    cin >> b;
    
    for(int i=0; i<n; i++){
        if(i==b)	continue;
        else cout << a[i] << " ";
    }
    
    return 0;
}