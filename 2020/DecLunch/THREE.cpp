/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std; 
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    string s; cin >> s;
    int a[26] = {0};
    int X = s.length()/3;

    for (int i = 0; i < s.length(); i++)
      a[s[i]-'a']++;

    int P=0;
    for (int i = 0; i < 26; i++)
      P+=a[i]/2;
    
    int ans = min(X, P);
    cout << ans << "\n";
  }

  return 0;
}
