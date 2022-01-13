// UOCSO003 - Số hoàn hảo
#include <iostream>
#include <math.h>
using namespace std;
int tonguoc(long long a)
{
    long long save = 1, cp = sqrt(a); // luu cac uoc theo 2 chieu // cp luu gia tri int cua sqrt(a)
    if(a == 1)		// uoc 1 khong nho hon chinh no nen return 0
        return 0;
    for(long i = 2; i <= sqrt(a); i++)
    {
        if(a%i == 0) save += i + a/i;
    }
    if (cp*cp == a) save -= cp;
    return save;
}
int main()
{
    int test;
    long long a;
    cin >> test;
    while(test --)
    {
        cin >> a;
        if (a == tonguoc(a)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}