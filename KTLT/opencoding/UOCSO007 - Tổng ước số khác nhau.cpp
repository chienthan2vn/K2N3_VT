// UOCSO007 - Tổng ước số khác nhau
#include<bits/stdc++.h>

using namespace std;
void uoc(long long a, long long b)
{
    long long count = 0;
    for(int i = 1; i <= sqrt(a); i ++)
    {
        if( a % i == 0)
        {
            if(b % i != 0)
            {
                count += i;
            }
            if(b % (a/i) != 0)
            {
                count += a/i;
                if(i == a/i)
                {
                    count -= i;
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long a, b;
        cin >> a >> b;
        uoc(a, b);
	}
	return 0;	
}