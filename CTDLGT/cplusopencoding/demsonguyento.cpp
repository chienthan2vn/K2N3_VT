#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
// prefix[i] se luu tru so luong cac so nguyen to
// cho den i (bao gom ca i)
int prefix[MAX + 1];

void buildPrefix()
{
	//tao mot mang boolearn[0...n]
	//gia tri cua prime[i] se gan la false
	// neu i ko phai so nguyen to, gan true
	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= MAX; p++) {
	// neu prime[p] ko thay doi, thi no la mot so nguyen to
		if (prime[p] == true) {
	// gan cac boi so cua p = fasle
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}
	// tao mang prefix
	prefix[0] = prefix[1] = 0;
	for (int p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}
	// tra ve so nguyen to trong doan L den R
int query(int L, int R)
{
	return prefix[R] - prefix[L - 1];
}

int main()
{
	buildPrefix();
	int t;
	cin >> t;
	while(t--)
	{
		int L,R;
		cin >> L >>R;
		cout << query(L, R) << endl;
	}
	return 0;
}