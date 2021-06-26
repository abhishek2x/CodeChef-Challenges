/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n; cin >> n;
  set<int> st;

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      st.insert(__gcd(i, j));
    }
  }

  cout << st.size() << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}