//DEC2BIN - Đổi hệ thập phân sang hệ nhị phân
#include <iostream>
#include <math.h>
using namespace std;
//Lay so mu trong a dang 2 mu x
void laymu(long long a)
{
    long long arr[100000], i = 0;
    while (a > 0)
    {
        arr[i++] = a%2;
        a /= 2;
    }
    int n = i;
    for(i = n-1; i >= 0; i --)
    {
        cout << arr[i];
    }
}
int main()
{
    int test;
    long long n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        laymu(n);
        cout << endl;
    }
    return 0;
}