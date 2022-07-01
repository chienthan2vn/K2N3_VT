//DEC2HEX - Chuyển đổi thập phân sang hexa
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

void dechex(unsigned long long a)
{
    string arr;
    unsigned int i = 0;
    if(a == 0) {
        cout << "0";
        return;
    }
    while (a != 0)
    {
        if(a%16 <= 9)
        {
        	arr[i++] = a%16 + '0';
        } else {
            arr[i++] = a%16 + '7';
        }
        a /= 16;
    }
    while (i--)
    {
        cout << arr[i];
    }
}
int main() 
{
    unsigned int test;
    cin >> test;
    while(test --)
    {      
        unsigned long long a;
        cin >> a;
        dechex(a);
        cout << endl;
    }
    
    return 0;
}