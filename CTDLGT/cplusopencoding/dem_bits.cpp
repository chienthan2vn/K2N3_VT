#include<bits/stdc++.h>
using namespace std;
long long Dec2Bin(int decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

long long sum1(long long n){
    long long res = 0;
    while(n){
        int  k = n%10;
        n/=10;
        res+=k;
    }
    return res;
}
int main()
{
    int n;
   	cin >> n;
    cout << "[";
    for(int i=0; i<=n; i++){
        if(i == n)	cout << sum1(Dec2Bin(i)) << "]";
        else
        cout << sum1(Dec2Bin(i)) << ",";
    }
    return 0;
}