/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll a, y, x; cin >> a >> y >> x;
  vector<ll> v;
  v[0] = 1; v[y] = -1;

  for(int i=1; i<=a; i++) {
    v[i] += v[i-1] + x;
    v[i+y] -= x;
  }

  cout << v[a];

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}