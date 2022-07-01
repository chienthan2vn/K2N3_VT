//BDSO003 - Biểu diễn số 03
//(n-1)*(n-2)*...*(n-k+1) / (k-1)*..*2
#include <bits/stdc++.h>
using namespace std;

long long count(int n, int k)
{
    if(n < k) return 0;
    if(k == 1) return 1;
    long long s = n-1;
    for (int i = 2; i <= k-1; ++i)
    {
        s *= (n-i);
        s /= i;
    }
    return s;
}
int main()
{
    int test;
    cin >> test;
    while(test --)
    {
        int n, k; cin >> n >> k;
        cout << count(n, k) << endl;
    }
    return 0;
}