/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
  
  vector <string> v = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

  ll t; cin >> t;
  while(t--) {
    ll n; cin >> n;
    string s; cin >> s;
    
    for (int j = 0; j < s.length(); j+=4)
    {
      string s1 = s.substr(j, 4);
      // cout << s1 << " ";
      for (int i = 0; i < v.size(); i++)
      {
        if(s1 == v[i]) {
          char alpha = (char)(i+97);
          cout << alpha;
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
