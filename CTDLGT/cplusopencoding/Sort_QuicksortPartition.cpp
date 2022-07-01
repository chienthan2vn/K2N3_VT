#include <bits/stdc++.h>

using namespace std;


void swap(vector<int> &arr, int i, int j){
    if(i==j) return;
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

/* Head ends here */
void partition(vector <int>  ar) {
    int boundary =0, i=1, number_of_ele= ar.size(), tmp=0;
    while(i<number_of_ele){
        if(ar[i] < ar[0]) {
            tmp = ar[i];
            for(int j = i;j>boundary+1;j--){
                ar[j] = ar[j-1];
            }
            boundary++;
            ar[boundary] = tmp;
        }
        i++;
    }
    int pivot = ar[0];
    for(i=0;i<boundary;i++)
        ar[i] = ar[i+1];
    ar[boundary] = pivot;
    for(i =0; i < number_of_ele;i++){
        if(i < number_of_ele -1) cout<<ar[i]<<" ";
        else cout<<ar[i]<<endl;
    }
}


/* Tail starts here */
int main() {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}