#include<bits/stdc++.h>

using namespace std;

bool sosanh(int a, int b){
    return (a>b);
}
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    vector<int> luu;
    for(int i=0; i<n; i++){
        int l,r;
        cin >> l >> r;
        if(r == 0)	sum+=l;
        else	luu.push_back(l);
    }
    
    sort(luu.begin(),luu.end(),sosanh);
    for(int i=0; i<luu.size(); i++)	
        if(i < k)	sum+=luu[i];
    	else	sum-=luu[i];
    
    cout << sum;
}