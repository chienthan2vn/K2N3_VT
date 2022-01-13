// COBAN009 - Đếm số chữ số
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
   {
      string a;
      cin >> a;
      if(a[0] == '-')
      {
         cout << a.length() - 1 << endl;;
      } else {
         cout << a.length() << endl;
      }
   }
	return 0;
}