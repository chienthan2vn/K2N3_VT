
//UOCSO005 - Phân tích số
#include <bits/stdc++.h>
using namespace std;

//
void result(long long n)
{
    //Ham
    int count = 0;
    long a[50] = {0}, j = 1;   //a luu snt, b luu so lan xuat hien
    
    //i xet tai 2
    if(n % 2 == 0)
    {
        a[0] ++;
        while(n%2==0)
	    {
		    n/=2;
		    count++;
	    }
        a[j++] = 2;
        a[j++] = count;
    }

    //i xet tu 3 i tang 2 don vi 
        for(int i = 3; i <= sqrt(n); i += 2)
        {
            count = 0;
            while(n%i==0)
            {
                n = n/i;
                count++;
            }
            if(count >0)
            {
                a[0] ++;
                a[j++]=i;
                a[j++]=count;
            }
        }
        if(n != 1)
        {
            a[0] ++;
            a[j++] = n;
            a[j++] = 1;
        }

        //in
        cout << a[0] << endl;
        for(int i = 1; i < j; i += 2)
        {
            cout << a[i] << " " << a[i+1] << endl;
        }
}
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		result(n);
	}
	return 0;
}