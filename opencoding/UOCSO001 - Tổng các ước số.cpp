// UOCSO001 - Tổng các ước số
#include <iostream>
#include <math.h>
using namespace std;
long tonguoc(long a)
{
    long save = 0, i; // luu cac uoc theo 2 chieu
    int c = sqrt(a);
    if(a == 1)		// uoc 1 khong nho hon chinh no nen return 0
        return 0;
    for(i = 2; i <= c; i++)
    {
        if(a%i == 0) save += i + a/i;
    }
    if(a == c*c) save -= c;
    return save + 1;
}
int main()
{
    int test;
    long n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        cout << tonguoc(n) << endl;
    }
    return 0;
}