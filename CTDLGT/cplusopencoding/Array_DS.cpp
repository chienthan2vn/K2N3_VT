#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> re;
    for(int i=0; i<n; i++){
        int b;
        cin >> b;
        re.push_back(b);
    }
    reverse(re.begin(),re.end());
    for(int i=0; i<re.size(); i++)	cout << re[i] << " ";
    return 0;
}