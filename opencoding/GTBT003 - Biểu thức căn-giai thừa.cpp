#include <bits/stdc++.h>
using namespace std;
long long giaiThua(int n);
int main() {
    int n,test;
    cin>>test;
    while (test--){
        cin>>n;
        float sum=0,k;
        for (int i = 1; i <=n ; i++) {
            k = 1.0/(i+1);
            sum= (float ) pow((giaiThua(i)+sum),k);

        }
        cout<<setprecision(3)<<fixed<<sum<<endl;
    }
    return 0;
}
long long giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
