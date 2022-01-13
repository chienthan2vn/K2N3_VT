//BIN2DEC - Chuyển đổi nhị phân sang thập phân
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
//Lay so mu trong a dang 2 mu x
void result(string a)
{
    int i = 0;
    unsigned long long count = 0, base = 1;
    for(int i = a.length() - 1; i >= 0; i --)
    {
        count += base * (a[i] - '0');
        base *= 2;
    }
    cout << count << endl;
}
int main()
{
    int test;
    string a;
    cin >> test;
    while(test --)
    {
        cin >> a;
        result(a);
    }
    return 0;
}