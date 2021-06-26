/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll a, y, x; cin >> a >> y >> x;
  
  if(a == 0) {
    cout << "1\n"; return;
  }

  if(a == y) {
    cout << a*x << "\n"; return;
  }
  if(a > y) {
    cout << (a*x)-(a-y) << "\n";
    return;
  }
  if(a < y) {
    cout << (a*x) + 1 << "\n";
    return;
  }

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}