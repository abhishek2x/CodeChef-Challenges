/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll C; cin >> C;
  ll bits=0, D=C;
  while(D) {
    D/=2; bits++;
  }
  ll A = (1 << (bits-1))-1;
  ll B = A^C;
  cout << A*B << "\n"; 
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}