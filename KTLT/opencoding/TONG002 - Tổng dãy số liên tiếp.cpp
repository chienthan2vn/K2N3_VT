// TONG002 - Tổng dãy số liên tiếp
#include"iostream"
#include"math.h"
#include"iomanip"
using namespace std;

long long result(long long l, long long r)
{
   return (l + r)*(r - l + 1)/2;
}

int main(){
	int t;
	cin >> t;
	while(t--)
   {
      long long l, r;
      cin >> l >> r;
      cout << result(l ,r) << endl;
   }
	return 0;
}