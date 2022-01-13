//COBAN022 - Mua Sô-cô-la
#include <iostream>
#include <cmath>
using namespace std;

void process () 
{
    long long int x, y, m;
    cin >> x >> y >> m;

    long long int exchange = m / x;
    long long int count = exchange;
    long long int box_zero = 0;
    while (exchange > 0)
    {
        box_zero = exchange + (box_zero % y);	//Tong vo du
        exchange = box_zero / y;	//So scl doi duoc
        count = count + exchange;	//So scl max
    }
    cout << count << "\n";
}

int main () {
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
}