//GTBT003 - Biểu thức căn-giai thừa
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int giaithua(int a)
{
    if(a == 1 || a == 0)
        return 1;
    return a*giaithua(a-1);
}
float can(int n)
{
    float result = 0; // result lưu giá trị của result cũ sau đó + với giai thừa hiện tại và lấy căn
    for(int i = 1; i <= n; i ++)
    {
        result = pow(giaithua(i)+result,1.0/(i+1));    // += ra sum
    }
    //cout << setprecision(3) << fixed << result << endl;
    return result;
    
}
int main()
{
    int test,n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        cout << setprecision(3) << fixed << can(n) << " \n";
    }
    return 0;
}