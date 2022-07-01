// LUYTHUA001 - Tính luỹ thừa a mũ n
#include<bits/stdc++.h>
using namespace std;

void result(long long a, int n)
{
   int arr[100000];
   int m = 1, nho = 0;
   arr[0] = 1;
   for(int i = 1; i <= n; i ++)
   {
      for(long j = 0; j < m; j ++)
      {
         nho = (arr[j]*a + nho);
         arr[j] = nho % 10;
         nho /= 10;
      }
      while(nho > 0)
      {
         arr[m++] = nho%10;
         nho /= 10;
      }
   }
   for(long i = m-1; i >= 0; i --)
   {
      cout << arr[i];
   }
}

int main(){
	int t;
	cin >> t;
	while(t--)
   {
      long a;
      int n;
      cin >> a >> n;
      result(a ,n);
      cout << endl;
   }
	return 0;
}