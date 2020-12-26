/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void getAns(string s) {
  ll oneCnt=0, zeroCnt=0;
  for (ll i = 0; i < s.length(); i++) {
    if(s[i] == '0'){
      zeroCnt++;
    } else {
      oneCnt++;
    }
  }
  
  if(zeroCnt == oneCnt) {
    cout << 0 << "\n";
  } else {
    cout << abs(zeroCnt-oneCnt)/2 << "\n";
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
     string s; cin >> s;
     ll len = s.length();
     if(len%2 == 1){
       cout << "-1\n";
     } else {
       getAns(s);
     }
  }

  return 0;
}