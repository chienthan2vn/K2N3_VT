//GTBT001 - Đa thức tổng
#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int tong(int n)
{
    if (n == 1)
        return 1;
    return n+tong(n-1);
}
void result(int n, float x)
{
    float kq = 0;
    for(int i = 1; i <= n; i++)
    {
        kq += (pow(x,i))/(tong(i));
    }
    cout << setprecision(3) << fixed << kq << endl;
    
}
int main()
{
    int test,n;
    float x;
    cin >> test;
    while(test --)
    {
        cin >> n >> x;
        result(n,x);
    }
    return 0;
}