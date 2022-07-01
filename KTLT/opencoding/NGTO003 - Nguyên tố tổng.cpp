//NGTO003 - Nguyên tố tổng
//neu so n va n - 2 la snt thi n la snt can tim
#include <iostream>
#include <cmath>
using namespace std;
int nt(long long n)
{
    int m = sqrt(n);
    for (int i = 3; i <= m; i += 2)
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 4) cout << 5 << endl;
        else {
            if (n % 2 == 0) ++n;
            while (n > 0)
            {
                if (nt(n-2) && nt(n)) break;
                n += 2;
            }
            cout << n << endl;
        }
    }
}