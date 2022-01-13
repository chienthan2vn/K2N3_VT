//GTBT005 - Biểu thức sin(x)
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int giaithua(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n*giaithua(n-1);
}
void tong(int n, float x)
{
    float result;
    result = 0;
    for(int i = 1; i <= n; i ++)
    {
        result += (float)(pow(x,i)/giaithua(i));
    }
    cout << setprecision(3) << fixed << result << endl;
}
int main()
{
    int test,n;
    float x;
    cin >> test;
    while(test --)
    {
        cin >> n >> x;
        tong(n,x);
    }
    return 0;
}