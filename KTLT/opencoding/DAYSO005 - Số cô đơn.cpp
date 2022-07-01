//DAYSO005 - Số cô đơn
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t --) {
        int a[1000005] = { 0 }, x, n, maxx = 0, dem = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            a[x]++;
            maxx = max(maxx, x);
        }
        for (int i = 0; i <= maxx; i++)
            if (a[i] == 1) dem++;
        cout << dem << endl;
    }
    return 0;
}