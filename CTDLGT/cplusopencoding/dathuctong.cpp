#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        float x;
        cin >> n >> x;
        float kq = 0;
        float tu = 1;
        float mau = 0;
        for(int k=1; k<=n; k++){
            tu*=x;
            mau+=k;
            kq += (tu/mau);
        }

        cout << fixed << setprecision(3) << kq << endl;
    }
}