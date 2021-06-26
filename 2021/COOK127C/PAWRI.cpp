/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  string s; cin >> s;
  string ans="";
  
  for(int i=0; i+4<s.length(); i++) {
    string temp = s.substr(i, 5);
    if(temp == "party"){
      s[i+2] = 'w';
      s[i+3] = 'r';
      s[i+4] = 'i'; 
      i+=4;
    }
  }
  cout << s << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--)
  solve();

  return 0;
}