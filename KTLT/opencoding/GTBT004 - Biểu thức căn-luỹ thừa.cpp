//GTBT004 - Biểu thức căn-luỹ thừa
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void can(int n, float x)
{
    float result = 0; // result lưu giá trị của result cũ sau đó + với giai thừa hiện tại và lấy căn
    float s = 1;
    for(int i = 1; i <= n; i ++)
    {
        s *= x;
        result = sqrt(s+result);    // += ra sum
    }
    cout << fixed << setprecision(3) << result << endl;
}
int main()
{
    int test,n;
    float x;
    cin >> test;
    while(test --)
    {
        cin >> n >> x;
        can(n,x);
    }
    return 0;
}