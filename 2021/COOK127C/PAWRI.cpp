/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  string s; cin >> s;
  string ans="";
  
  for(int i=0; i<s.length(); i++) {
    // cout << ans << " ";
    if(s[i] == 'p' && i<=s.length()-5){
      string temp="";
      for(int j=i; j<i+5; j++)  temp += s[j];
      if(temp == "party") {
        i+=5;
        ans += "pawri";
      } else ans+=s[i];
    } else ans += s[i];
  }
  cout << ans << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
  
  solve();

  return 0;
}