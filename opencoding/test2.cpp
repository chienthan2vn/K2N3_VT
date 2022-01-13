//FIBO005 - Biểu diễn số N dưới dạng tổng của các số Fibonacci không lặp lại
#include <bits/stdc++.h>
using namespace std;

void fibonacci(vector<int> &fibo, int n) {
    fibo.push_back(1);
    fibo.push_back(2);
    for(int i = 2; fibo[i-1] < n; i++) fibo.push_back(fibo[i-1] + fibo[i-2]);
}

void result(vector<int> &fibo, int &m, int &n, int k, int &count, int j = 0, int check = 0) {
    for(int i = j; i <= m- k; i++) {
        check += fibo[i];
        if(check > n || k < 1) break;
        if(k > 1) result(fibo, m, n, k - 1, count, i, check);
        if(k == 1 && check == n) count ++;
        check -= fibo[i];
    }
}

int main (){
    int a[5];
    cout << sizeof(a)/sizeof(a[0]);
    return 0;
}