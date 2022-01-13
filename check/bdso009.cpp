#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

struct Matrix{
    long long f[2][2];
};

Matrix operator* (Matrix A, Matrix B){
	Matrix C; int i,j,k;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			C.f[i][j] = 0;
			for(k=0; k<=1; k++)
			C.f[i][j] = (C.f[i][j] + (A.f[i][k] * B.f[k][j]) % mod) % mod;
		}
	}
	return C;
}

Matrix powerMod (Matrix A, int n){
    if (n==1) return A;
    Matrix X = powerMod (A, n/2);
    if (n % 2 == 0) return X*X;
    return A*X*X;
}

long long Fibo (int n){
    Matrix A;
    A.f[0][0] = 1;
    A.f[0][1] = 1;
    A.f[1][0] = 1;
    A.f[1][1] = 0;
    Matrix KQ = powerMod (A, n);
    return KQ.f[0][1];
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << Fibo (n) << endl;
    }
    return 0;
}