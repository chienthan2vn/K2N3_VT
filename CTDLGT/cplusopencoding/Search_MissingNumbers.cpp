#include<iostream>

using namespace std;

const int maxn = 10000;

int A[maxn*2 + 5];

int main() {
  int n, m;
  int xmin = maxn, xmax = -maxn;
  cin >> n;
  for( int i = 0; i<n; i++ ) {
    int tmp;
    cin >> tmp;
    A[tmp] --;
  }
  cin >> m;
  for( int i = 0; i<m; i++ ) {
    int tmp;
    cin >> tmp;
    A[tmp] ++;
    if (xmax < tmp) { xmax = tmp; }
    if (xmin > tmp) { xmin = tmp; }
  }
  for( int i=xmin; i<=xmax; i++ ) {
    if( A[i] > 0 ) {
      cout << i << " ";
    }
  }
  return 0;
}