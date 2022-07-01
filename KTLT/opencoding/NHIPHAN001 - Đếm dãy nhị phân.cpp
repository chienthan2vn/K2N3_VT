//NHIPHAN001 - Đếm dãy nhị phân
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void tp(string a, string b, int n)
{
    long long count = 0, base = pow(2, n-1);
    int check[100005]; int k = 0, save = 0, j, maxx;
    memset(check, 0, sizeof(check));
    for(int i = 0; i < n; i ++)
    {
        count += (base)* ((a[i] - '0') - (b[i] - '0'));
        while(count > 0) {
            check[k] += count % 10;
            j = k;
            while(check[j] >= 10) {
                check[j] = (save + check[j])%10;
                save = check[j]/10;
                j++;
            }
            ++k;
            count /=10;
        }
        maxx = max(j, k);
        k = 0;
        base /= 2;
    }
    count = abs(count);
    if(count == 0) {
        cout << "0" << endl;
        return;
    }
    for(int i = maxx; i >=0; i--) cout << check[i];
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test --)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;
        tp(a, b, n);
    }
    return 0;
}