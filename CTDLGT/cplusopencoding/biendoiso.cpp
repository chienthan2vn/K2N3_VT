#include<bits/stdc++.h>
using namespace std;
struct data
{
	int gt;
    short dem;
};
short solve(int n)
{
	set<short>s;
	s.insert(n);
	queue<data>luu;
	luu.push({n, 0});
	while(! luu.empty())
    {
		data tmp = luu.front();
        luu.pop();
		if(tmp.gt == 1)
        {
            return tmp.dem;
        }
        if(tmp.gt == 3 || tmp.gt == 2)
        {
            return tmp.dem + 1;
        }
        if(s.find(tmp.gt - 1) == s.end())
        {
			luu.push({tmp.gt-1, tmp.dem + 1});
			s.insert(tmp.gt - 1);
		}
		if(tmp.gt % 2 == 0 && s.find(tmp.gt / 2) == s.end())
        {
			luu.push({tmp.gt / 2, tmp.dem + 1});
			s.insert(tmp.gt / 2);
		}
		if(tmp.gt % 3 == 0 && s.find(tmp.gt / 3) == s.end())
        {
			luu.push({tmp.gt / 3, tmp.dem + 1});
			s.insert(tmp.gt / 3);
		}
		short k = sqrt(tmp.gt);
		if(k * k == tmp.gt && s.find(k) == s.end())
        {
			luu.push({sqrt(tmp.gt), tmp.dem + 1});
			s.insert(sqrt(tmp.gt));
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	short t;
    int n;
	cin >> t;
	while(t --)
    {
		cin >> n;
		short res = solve(n);
		cout << res + 1 << "\n";
	}
}