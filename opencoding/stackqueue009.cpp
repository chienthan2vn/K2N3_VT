//STACKQUEUE009 - PREFIX TO INFIX
#include <bits/stdc++.h>
using namespace std;

bool check(char x)
{
  switch (x){
    case '+':
    case '-':
    case '*':
    case '/':
      return true;
  }
  return false;
}

string swap(string st)
{
  stack<string> s;
  int length = st.length();

  for (int i = length - 1; i >= 0; i--){
    if (check(st[i])){
      string op1 = s.top(); s.pop();
      string op2 = s.top(); s.pop();
      string temp = "(" + op1 + st[i] + op2 + ")";
      s.push(temp);
    }
    else s.push(string(1, st[i]));
  }
  return s.top();
}

int main (){
  int t;
  cin >> t;
  while (t--){
    string st; cin >> st;
    cout << swap(st) << endl;
  }
  return 0;
}