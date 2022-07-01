#include <bits/stdc++.h>
using namespace std;
int m, n;
int count = 0, check = 0;
void tryit(int i)
{
    for(int k = i; k <= pow(m, 1.0/n); k++) {
        check += pow(k,n);
        if(check < m) tryit(i + 1);
        else if(check > m) {
            check -= pow(k,n);
            break;
        }
        else {
            count ++;
            check -= pow(k,n);
            break;
        }
        check -= pow(k,n);
    }
}
int main()
{
    int test;
    cin >> test;
    while(test --)
    {
        check = 0; count = 0;
        int m, n; cin >> m >> n;
        tryit(1);
        cout << count << endl;
    }
    return 0;
}