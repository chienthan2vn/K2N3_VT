#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		float x;
	    float T = 1;
	    float S = 0;
	    cin >> n >> x;
    for(int i=1; i<=n; i++)
    {
        T = T * x;
        S = sqrt(T + S);
    }
    cout << fixed << setprecision(3) << S;
    cout << endl;
	}
  
    return 0;
}