//COBAN008 - Tổng hai số lớn
#include <string>
#include <iostream>
using namespace std;
void chuanHoa(string &a, string &b) // lam 2 xau co do dai bang nhau
{
    int x = a.length();
    if (x < b.length()) x = b.length();
    a = string(x-a.length(), '0') + a;
    b = string(x-b.length(), '0') + b;
}
void sum(string a, string b)  // tong 2 so
{
    int result[1000];
    chuanHoa(a,b);      // chuan hoa
    int l = a.length();
     
    int them = 0;
    int count = 0;
	for(int i=l-1; i>=0; i--)
	{
		result[count ++] = a[i] + b[i] - 2*'0' + them;
	    them = 0;
	    if(result[count - 1] > 9)
	    {
		    result[count-1] -= 10;
		    them = 1;
	    }
	}
    if (them == 1)  // neu hang chuc > 0 thi them vao KQ
	{
        result[count++] = 1;
    } 
	for(int i=count-1; i>=0; i--)
	{
		cout << result[i];
	}
	cout << endl;
}

int main()
{
    int test;
    string a, b;
    cin >> test;
    while(test --)
    {
        cin >> a >> b;
        sum(a, b);
    }
    return 0;
}