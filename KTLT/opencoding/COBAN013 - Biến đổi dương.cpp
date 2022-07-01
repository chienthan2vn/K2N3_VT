//COBAN013 - Biến đổi dương
//cung duong hoac cung am, in ra so pha tu it hon(duong hoac am)
//co 0 trong day in -1
#include<bits/stdc++.h>
using namespace std;

int result(int a[],int n)
{
    int am = 0, duong = 0;
	//
    for(int i = 0; i < n; i ++){
        if(a[i] == 0) return -1;
        if(a[i] > 0) duong ++;
        else am ++;
    }

    return min(am, duong);       
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
        int a[n];
		for(int i = 0; i < n; i ++)
            cin >> a[i];

		cout << result(a, n) << endl;
	}
	return 0;
}