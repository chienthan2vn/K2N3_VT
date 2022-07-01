#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	short t;
	cin >> t;
	string s;
    getline(cin, s);
	while(t --)
    {
        getline(cin, s);
		string time = s.substr(7, 13);	
		if(time[1] == '?' && time[2] == '?')
        {
			time[1] =' 2';
			time[2] = '3';
		}
		if(time[1] == '?' && time[2] != '?')
        {
			if(time[2] >= '4')
            {
                time[1] =' 1';
            }
            else
            {
                time[1] = '2';
			}
        }
		if(time[1] != '?' && time[2] == '?')
        {
			if(time[1] == '2')
            {
                time[2] = '3';
            }
            else
            {
                time[2] = '9';
			}
        }
		if(time[4] == '?')
        {
            time[4] = '5';
        }
        if(time[5] == '?')
        {
            time[5] = '9';
        }
        cout << time << "\n";
	}
}