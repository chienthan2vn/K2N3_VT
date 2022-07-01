#include<bits/stdc++.h>

using namespace std;

#define ll long long

void kq(ll n){
    ll coso = 0;
    ll max = 0;
    ll dem = 0;
    while(n%2==0){
        n /= 2;
        dem++;
    }
    if(dem > 0){
        coso = 2;
        max = dem;
    }

    for(ll i=3; i<=sqrt(n); i+=2){
        dem = 0;
        while(n%i==0){
            n /= i;
            dem++;
        }
        if(dem > 0 && dem > max){
            coso = i;
            max = dem;
        }
    }
    if(n>1 && coso ==0 && max ==0){
        coso = n;
        max = 1;
    }
    cout << coso << " " << max << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        kq(n);
    }
    return 0;
}