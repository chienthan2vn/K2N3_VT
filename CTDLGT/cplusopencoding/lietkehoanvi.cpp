#include<bits/stdc++.h>

using namespace std;

int n;
int a[16];

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n; 
        for(int i=1; i<=n; i++) a[i]= i;
        do{
            for(int i=1; i<=n; i++) cout<<a[i]<<(i<n?" ":"\n");
        }while(next_permutation(a+1, a+1+n));
    }
    return 0;
}