// UOCSO002 - Ước số nguyên tố
#include <iostream>
#include <math.h>
using namespace std;
int result(long a)
{
    int save = 0; // luu cac uoc theo 2 chieu
    if(a == 1) return 0;
    if(a == 2) return 1;
    for(long i = 2; i <= sqrt(a); i ++)
    {
        bool c = false;
        while(a%i == 0)
        {
            a /= i;
            c = true;
        }
        if(c == true) save ++;
    }
    if(a != 1) save ++;
    return save;
    
}
int main()
{
    int test;
    long n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        cout << result(n) << endl;
    }
    return 0;
}