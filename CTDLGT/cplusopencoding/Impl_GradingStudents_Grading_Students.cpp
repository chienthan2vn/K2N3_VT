#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n <38)   cout << n << endl;
        else if(n >= 38 && n <= 40)  cout << 40 << endl;
        else if(n%5==0 && n < 100)  cout << n << endl;
        else{
            int k = n%10;
            int m = n/10;
            if(k > 5){
                m++;
                m = m*10;
            }
            else m =m*10 + 5;

            if(abs(m-n) < 3)    cout << m << endl;
            else cout << n << endl;
            //cout << m << endl;
        }
    }
    return 0;
}