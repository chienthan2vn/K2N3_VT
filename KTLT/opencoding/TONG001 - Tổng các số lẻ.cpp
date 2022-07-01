// TONG001 - Tổng các số lẻ
#include"iostream"
#include"math.h"
#include"iomanip"
using namespace std;

long long result(long long l, long long r)
{
	if(l % 2 == 0)
   {
      l = l + 1;
   }
   if(r % 2 == 0)
   {
      r = r - 1;
   }
   return (l + r)*((r - l)/2 + 1)/2;
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