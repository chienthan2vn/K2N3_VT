#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sort_fun(string a, string b)
{
    int x = a.length();
    if (x < b.length()) x = b.length();
    a += string(x-a.length(), '0');
    b += string(x-b.length(), '0');
    return (a > b);
}

int main()
{
    vector<string> rel;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        vector<string> ip;
        int m;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            long a;
            cin >> a;
            ip.push_back(to_string(a));
        }
        sort(ip.begin(), ip.end(), sort_fun);
        rel.push_back("");
        for (int j = 0; j < m; ++j) {
            rel[i] += ip[j];
        }
    }
    for (int i = 0; i < rel.size(); ++i) {
        cout << rel[i] << endl;
    }
}