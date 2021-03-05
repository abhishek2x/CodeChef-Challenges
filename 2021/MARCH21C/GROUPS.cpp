/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  string s; cin >> s;
  int ones=0;
  for(char ch: s) if(ch == '1') ones++;
  for(int i=0; i<s.length()-1; i++) {
    if(s[i] == '1' && s[i+1] == '1'){
      ones--;
    }
  }
  cout << ones << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}