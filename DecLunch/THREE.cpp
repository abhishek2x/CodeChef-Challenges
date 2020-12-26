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

    for (int i = 0; i < s.length(); i++)
      a[s[i]-'a']++;
    
    for (int i = 0; i < 26; i++)
      cout << a[i] << ", ";
    
    ll ones=0, twos=0, ans=0;
    for (int i = 0; i < 26; i++)
    {
      if(a[i] >= 3){
        ans += a[i]/3;
        a[i] /= 3;
      }
      if(a[i] == 2){
        twos++;
        a[i] -= 2;
      }
      if(a[i] == 1){
        ones++;
        a[i] -= 1;
      }
    }
    ans += min(twos, ones);
    cout << ans << "\n";
  }

  return 0;
}
