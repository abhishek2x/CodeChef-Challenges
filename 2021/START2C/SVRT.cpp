/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  double n, k; cin >> n >> k;
  int d, x;

  d = ceil(n/k);
  int xta = ((k-floor(n/d)) * 2);
  x = k-xta;

  cout << d << " " << x << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}