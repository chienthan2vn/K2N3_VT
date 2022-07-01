#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a = 0;
	int b = 3;
	int arr[6][6];
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cin >> arr[i][j];
		}
	}
	int m = 0;
	int n = 0;
	int ar[4][4];
	int sum = 0;
	int temp = 0;
	for(int i=0; i<4; i++){
		sum = 0;
		for(int j=0; j<4; j++){
			sum = 0;
			for(int k=j; k<j+3; k++){
				temp = j;
				sum += arr[i][k] + arr[i+1][k] + arr[i+2][k];
			}
			ar[m][n] = sum - arr[i+1][temp] - arr[i+1][temp+2];
			n++;
		}
		m++;
		n = 0;
	}
	int max = INT_MIN;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			//cout << ar[i][j] << " ";
			if(max < ar[i][j])	max = ar[i][j];
		}
		//cout << endl;
	}
	cout << max;
	return 0;
}