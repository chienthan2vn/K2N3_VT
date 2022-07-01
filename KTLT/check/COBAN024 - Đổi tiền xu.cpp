//COBAN024 - Đổi tiền xu
#include<bits/stdc++.h>

using namespace std;

int coin(int a[],int m,int n){
	
	if(n==0)
	  return 1;
    if(n<0)
      return 0;
    if(m<=0&&n>=1)
      return 0;
    return coin(a,m-1,n)+coin(a,m,n-a[m-1]);
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<coin(a,m,n);
	
}