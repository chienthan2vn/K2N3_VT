#include<bits/stdc++.h>

using namespace std;
bool isSubsequence(string s, string t) {
        if (s.size() <= 0) return true;
        
        int ps=0, pt=0;
        while (pt < t.size()) {
            if (s[ps] == t[pt]) {
                ps++; pt++;
                if (ps >= s.size()) return true;
            }else {
                pt++;
            }
        }
        
        return false;
    }
int main(){
    cin.ignore();
    string s,t;
    cin >> s >> t;
  	if(isSubsequence(s,t))	cout << "true";
    else cout << "false";


    return 0;
}