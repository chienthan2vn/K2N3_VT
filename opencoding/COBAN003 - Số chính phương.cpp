//COBAN002 - Số chính phương
#include <iostream>
#include <math.h>
using namespace std;
bool scp(long long a)
{
    int b = sqrt(a);
    if(b*b == a)
    {
        return true;
    }
    return false;
}
void result(long long a, long long b)
{
    int count = 0, a1, b1 = sqrt(b);
    if(scp(a) == true)
    {
        a1 = sqrt(a);
    } else {
        a1 = sqrt(a) + 1;
    }
    for(int i = a1; i <= b1; i ++)
    {
            count ++;
    }
    cout << count << endl;
}
int main()
{
    int test;
    long long a, b;
    cin >> test;
    while(test --)
    {
        cin >> a >> b;
        result(a, b);
    }
    return 0;
}