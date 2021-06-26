/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;

  while(t--) {
    ll n;
    cin >> n;

    cout << (n-(n/2)) - ((n-(n/2))/2) << "\n";
  }

  return 0;
}