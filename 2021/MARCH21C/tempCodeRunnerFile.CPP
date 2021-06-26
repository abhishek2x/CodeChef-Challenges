/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll C; cin >> C;
  ll lmt=1, i=1;
  while(lmt<C){
    lmt = lmt << i++;
  }
  cout << i;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}