//COBAN023 - Số mũ lớn nhất của ước số
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
void result(ull n, ull p)
{
	ull count = 0, i = p;
	while(n >= i)
	{
		count += n/i;
		i *= p;
	}
	cout << count << endl;
}
int main(){
	int t; cin >> t;
    while (t --) {
        ull n, p; cin >> n >> p;
		result(n, p);
	}
	return 0;
}