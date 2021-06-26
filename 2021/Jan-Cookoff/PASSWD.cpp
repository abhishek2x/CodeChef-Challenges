/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isValid(string s) {
  if(s.length() < 10) 
    return false;
  
  bool lower=false, upper=false, dig=false, special=false;

  for(int i=0; i<s.length(); i++) {
    char ch = s[i];
    if(ch >= 'a' && ch <= 'z')
      lower=true;
    if(i > 0 && i < s.length()-1){
      if(ch >= 'A' && ch <= 'Z')
        upper=true;
      if(ch >= 48 && ch <= 57)
        dig=true;
      if(ch == '@' || ch == '#' || ch == '%' || ch == '&' || ch == '?')
        special=true;
      }
  }

  return lower && upper && dig && special;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    string S; cin >> S;

    if(isValid(S)) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}