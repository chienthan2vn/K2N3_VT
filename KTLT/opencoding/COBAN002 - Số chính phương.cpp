//COBAN002 - Số chính phương
#include <iostream>
#include <math.h>
using namespace std;
bool scp(long long a)    //xet 1 so co phai so chinh phuong khong
{
    long long b = sqrt(a);
    if(b*b == a) return true;
    return false;
}
bool ptcp(long long a)     //moi phan tu trong so do deu la so chinh phuong
{
    int count;  // count luu gia tri rieng le cua chu so trong 1 so
    int dem1 = 0, dem2 = 0; // dem1 luu gia tri so cac chu so, dem2 luu gia tri chu so chinh phuong
    while (a > 0)
    {
        count = a%10;
        a /= 10;
        if(scp(count) == true) dem2 ++;
        dem1 ++;
    }
    if(dem1 == dem2) return true;
    return false;
}
long long result(int a)
{
    int x, y;
    if (a%2 == 0)
    {
        x = sqrt(pow(10,a-1))+1;
        y = sqrt(pow(10,a));
    } else {
        x = sqrt(pow(10,a-1));
        y = sqrt(pow(10,a))+1;
    }
    for(long long i = x; i < y ; i ++)
    {
        if(ptcp(i*i) == true)
        {
            return i*i;
        }
    }
    return -1;
}
int main()
{
    int test;
    long long a;
    cin >> test;
    while(test --)
    {
        cin >> a;
        cout << result(a) << endl;
    }
    return 0;
}