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
    ll l, r; cin >> l >> r;
    cout << (2*r)-(2*l)+1 << "\n";
  }

  return 0;
}