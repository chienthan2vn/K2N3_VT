//DAYSO001 - Dãy cấp số cộng

#include <bits/stdc++.h>
using namespace std;

//
bool result(long long int arr[], int n)
{
    //Khai bao va Ham
    long long int d = arr[1] - arr[0], count = 0;
    if(d == 0)
    {
        return false;
    } else {
        for(int i = 1; i < n-1; i ++)
        {
            if(arr[i+1] - arr[i] != d)
            {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for(int i = 0; i < n; i ++)
        {
            cin >> arr[i];
        }
        if(result(arr, n))
        {
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
	return 0;
}