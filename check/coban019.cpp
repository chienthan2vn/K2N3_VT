//COBAN019 - Biến đổi số
#include <bits/stdc++.h>
using namespace std;
#define ll  unsigned long long  //giam bo nho

ll count(ll n)
{
	if(n<2)
	return n;
	ll result = 0;
	result = 1 + min(n%3 + count(n/3), n%2 + count(n/2));
	return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << count(n) << endl;
    }

}
