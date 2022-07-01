//COBAN001 - Số Armstrong
#include <iostream>
#include <math.h>
using namespace std;
int demso(long long a)
{
    int count = 0;  // count dem xem co bao nhieu so
    while(a > 0)
    {
        count += 1;
        a /= 10;
    }
    return count;
}
void result(long long a)
{
    int phantu, value = demso(a); // phantu luu gia tri tung don vi trong a, value dem xem co bao nhieu phan tu trong so
    long long count = 0; // count luu gia tri tong cua arstrong
    long long b = a;    // b luu gia tri ban dau cua a
    while(a > 0)
    {
        phantu = a%10;
        count += pow(phantu,value);
        a /= 10;
    }
    if(b == count) 
    {
        cout << "1" << endl;
    } else
    {
        cout << "0" << endl;
    }
}
int main()
{
    int test;
    long long a;
    cin >> test;
    while(test --)
    {
        cin >> a;
        result(a);
    }
    return 0;
}