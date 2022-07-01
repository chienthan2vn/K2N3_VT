#include<bits/stdc++.h>

using namespace std;

bool ss(int a, int b){
    return a>b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++)	cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,ss);
        bool check = false;
        for(int i=0; i<n; i++){
            if(a[i]+b[i] < k){
                check = true;
                break;
            }
        }
        
        if(check)	cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}