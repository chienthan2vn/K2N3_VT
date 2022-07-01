//FIBO005 - Biểu diễn số N dưới dạng tổng của các số Fibonacci không lặp lại
#include <bits/stdc++.h>
using namespace std;

void fibonacci(vector<int> &fibo, int n) {
    fibo.push_back(1);
    fibo.push_back(2);
    for(int i = 2; fibo[i-1] < n; i++) {
        fibo.push_back(fibo[i-1] + fibo[i-2]);
    }
}

void result(vector<int> &fibo, int n, int &count, int j = 0, int check = 0) {
    for(int i = j; i < fibo.size(); i++) {
        check += fibo[i];
        if(check > n) break;
        if(check < n) result(fibo, n, count, i + 1, check);
        if(check == n) count ++;
        check -= fibo[i];
    }
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> fibo;
        int count = 0;
        fibonacci(fibo, n);
        result(fibo, n, count);
        cout << count << endl;
    }
    return 0;
}