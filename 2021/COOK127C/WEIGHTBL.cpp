/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int w1, w2, x1, x2, M;
  cin >> w1 >> w2 >> x1 >> x2 >> M;
  if((x2*M >= (w2-w1)) && (x1*M <= (w2-w1)))
    cout << "1\n";
  else cout << "0\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}