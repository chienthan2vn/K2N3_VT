//DAYSO010 - Tìm thẻ bị thiếu
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    while (n--) {
        int m, s; cin >> m >> s;
        s += m-1;
        unsigned long long l = s;
        for (int i = 0; i < m - 1; ++i)
        {
            int t; cin >> t;
            l += --s;
            l -= t;
        }
        cout << l << endl;
    }
}
