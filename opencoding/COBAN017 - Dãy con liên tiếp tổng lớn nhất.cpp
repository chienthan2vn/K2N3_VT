//COBAN017 - Dãy con liên tiếp tổng lớn nhất
#include <bits/stdc++.h>
using namespace std;

void result(int arr[], int n) 
{
    int best = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
int main() {
    int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i ++)
		{
			cin >> arr[i];
		}
		result(arr, n);
	}
	return 0;
}