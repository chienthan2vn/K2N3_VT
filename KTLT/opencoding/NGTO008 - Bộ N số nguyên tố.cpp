//NGTO008 - Bộ N số nguyên tố
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void snt(int p, int s) { 
    bool check[s+1];
    for(int i = 2; i <= sqrt(s); i++) {
        if(!check[i]) {
            for(int j = i*i; j <= s; j+= i)
                check[j] = true;
        }
    }
    for(int i = p + 1; i <= s; i++) {
        if(!check[i]) v.push_back(i);
    }
}

void result(vector<int> &a, int p, int n, int s, bool &c, int j = 0, int k = 0, int check = 0) {
    for(int i = j; i < v.size(); i++) {
        check += v[i];
        if (check > s) break;
        a.push_back(v[i]);
        if(k < n-1) {
             result(a, p, n, s, c, i + 1, k + 1, check);
        }
        if (k == n-1) {
            if (check == s) {
                for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
                cout << endl;
                c = 1;
            } 
        }
        check -= v[i];
        a.pop_back();
    }
}

int main()
{
    int p, n, s; cin >> p >> n >> s;
    vector<int> a;
    bool c = 0;
    snt(p, s);
    result(a, p, n, s, c);
    if(c == 0) cout << -1;
}