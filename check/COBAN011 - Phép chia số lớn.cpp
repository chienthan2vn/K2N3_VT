#include<bits/stdc++.h>
using namespace std;
void removeZero(vector<int>&v){
	while(v[v.size()-1] ==0 && v.size() >1 ) v.pop_back();
}
void print(vector<int>v){
	for(int i = v.size()-1 ; i >=0;i--){
		cout <<v[i];
	}
}
void init(string str, vector<int> &v){
	for(int i = str.size() -1 ; i>= 0 ; i--){
		v.push_back(str[i] -'0');
	}
	removeZero(v);
}
int comepare(vector<int>a , vector<int>b){
	if(a.size() > b.size()) return -1;
	if(a.size() < b.size()) return 1;
	for(int i = a.size() -1 ; i>=0 ; i--){
		if(a[i] > b[i]) return -1;
		if(a[i] < b[i]) return 1;
	}
	return -1;
}
void add(vector<int>v1 , vector<int>v2 , vector<int>&v3){
	v3.clear();
	int length = v1.size() > v2.size() ? v1.size() : v2.size();
	v1.resize(length);
	v2.resize(length);
	int extra = 0;
	int temp ;
	for(int i = 0 ; i < length ; i++){
		temp = v1[i] + v2[i] + extra;
		v3.push_back(temp%10);
		extra = temp /10;
	}
	if(extra > 0) v3.push_back(temp);
}

void sub(vector<int>v1 , vector<int>v2 , vector<int>&v3){
	v3.clear();
	int length = v1.size();
	v2.resize(length);
	int extra = 0;
	int temp;
	for(int i = 0 ; i < length; i++){
		if(v1[i] < v2[i] + extra){
			v3.push_back(v1[i] - v2[i] - extra+10);
			extra = 1;
		}
		else{
			v3.push_back(v1[i] - v2[i] - extra);
			extra =0;
		}
	}
	removeZero(v3);
}
vector<int>carry;
void div(vector<int>a , vector<int>b , vector<int>&c){
	c.clear();
	carry.clear();
	int count = 0;
	while(comepare(carry , b) != -1 && a.size() > 0){
		carry.insert(carry.begin() , char(a.back()));
		a.pop_back();
	}
	while(comepare(carry , b) != 1){
		count++;
		sub(carry , b , carry);
	}
		c.insert(c.begin(), count);
	while(a.size() > 0){
		count = 0;
		if(comepare(carry , b) != -1 && a.size() > 0){
			carry.insert(carry.begin(), char(a.back()));
			a.pop_back();
		}
		removeZero(carry);
		count = 0 ;
		while(comepare(carry , b) != 1){
			count++;
			sub(carry , b , carry);
		}
			c.insert(c.begin(), count);
	}
	removeZero(c);
}

int main(){
	int t ;cin>>t;
	while(t--){
		string a;
		string b;
		cin >>a>>b;
		vector<int>v1 , v2 , v3 , v4 , v5;
		init(a , v1);
		init(b , v2);
		div(v1 , v2 , v5);
		print(v5);
		cout <<" ";
		print(carry);
		cout <<endl;
	} 
}