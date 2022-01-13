//COBAN021 - Số có hai chữ số A và B
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define MAX 1000000000000000001

ull Dequy(ull result, short x, int xcount, short y, int ycount, ull n, int sochuso)
{
	if(xcount + ycount > sochuso + 2 || result > MAX)
	{
		return MAX;
	}
	if(xcount == ycount && result >=n)
	{
		return result;
	}
	
	return min(Dequy(result*10+x,x, xcount+1, y, ycount,n,sochuso), Dequy(result*10+y,x, xcount, y, ycount+1,n,sochuso));
}
ull findnumber(ull n, short x, short y)
{
	int sochuso = floor(log10(n)) + 1; // so chu so cua n
	ull result = 0; // so can tim
	int xcount = 0; // so chu so x
	int ycount = 0; // so chu so y
	
	if(x==y)
	{
		while(result<n)
		{
			result = result * 10 + x;
		}
		return result;
	}
	return Dequy(result,x,xcount,y,ycount,n,sochuso);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ull n;
		cin >> n;
		short x,y;
		cin >> x >> y;
		cout << findnumber(n,x,y) << endl;
	}
	return 0;
}