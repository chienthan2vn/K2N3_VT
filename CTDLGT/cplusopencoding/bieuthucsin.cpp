#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846
#define epsilon 0.00001

int main(){
	int t;
	cin>>t;
    float x;
    while(t--){
    cin>>x;
    while(x>(2*pi)) x-=2*pi;
    float pk=1.0;
    float tk=x;
    float sk=x;
    int dau=-1;
    for(int i=1;(tk/pk)>epsilon;i++,dau=-dau){
    	tk*=x*x;
    	pk*=2*i*(2*i+1);
    	sk+=dau*tk/pk;
    	}
   
    cout<<setprecision(6)<<fixed<<sk;
    cout<<endl;
    }
}