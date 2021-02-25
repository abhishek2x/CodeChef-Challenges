/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    ll n, k; cin >> n >> k;
    vector<ll> a; a.resize(k);
    vector<string> s; s.resize(n);

    for(ll i=0; i<k; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> s[i];

    for(ll i=0; i<n; i++) {
      ll sum = 0;
      ll j=0;
      for(char ch: s[i]) {
        if(ch == '1')
          sum += a[j];
        j++;  
      }
      cout << sum << "\n";
    }

  }

  return 0;
}