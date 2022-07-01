#include<iostream>
using namespace std;
void exec()
{
	string a, c, b, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	c.erase(0, 1);
	c.erase(c.length() - 2, 2);
	f.erase(0, 1);
	f.erase(f.length() - 1, 1);
	if(c.length() == 0 || f.length() == 0)
    {
		cout << 0 << "\n";
		return;
	}
	int i, j, len = f.length() - c.length();
	bool f1 = false;
	for(i = 0; i < len; ++ i)
    {
		bool f2 = true;
		for(j = 0; j < c.length(); ++ j)
        {
			if(f[i + j] != c[j])
            {
				f2 = false;
				break;
			}
		}
		if(f2)
        {
			f1 = true;
			cout << i << "\n";
			break;
		}
	}
	if(! f1) 
    {
        cout << -1 << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t --)
	exec();
}