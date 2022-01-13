//GTBT002 - Biểu thức tổng giai thừa
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void tong(int n, float x)
{
    float result = 0, count  = 1;
    for(int i = 1; i <= n; ++i)
    {
        result += (pow(x,i)/count);
        count *= (i+1);
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