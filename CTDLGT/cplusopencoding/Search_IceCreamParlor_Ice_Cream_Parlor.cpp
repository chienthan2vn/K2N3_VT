#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> m >> n;
        int a[n];
        for(int i=0; i<n; i++)	cin >> a[i];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] + a[j] == m)	cout << i+1 << " " << j+1;
            }
        }
        
        cout << endl;
    }
    return 0;
}