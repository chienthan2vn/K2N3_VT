//Hoán vị 001 - liệt kê hoán vị có n số
//quay lui
//toan tu 3 ngoi khong la tach
#include <bits/stdc++.h>
using namespace std;
bool check[16] = {0};
void quaylui(vector<int> &a, int &n, int j = 1, int c = 1)
{
    for(int i = 1; i <= n; i++) {
        if(check[i] == 0) {
            a.push_back(i);
            check[i] = 1;
        } else continue;
        if(c < n) quaylui(a, n, i + 1, c + 1);
        if(c == n) {
            for(int i = 0; i < a.size(); i++) cout << a[i] <<(i<n-1?" ":"\n");	
            //toan tu 3 ngoi
        }
        check[i] = 0;
        a.pop_back();
    }
}
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
        int n; cin >> n;
        vector<int> a;
        quaylui(a, n);
        
    }

    return 0;
}