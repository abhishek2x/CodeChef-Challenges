/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, m; cin >> n >> m;

  vector<int> f; f.resize(n);
  vector<int> c; c.resize(m);
  vector<pair<int, bool> >v;

  for(int i=0; i<n; i++) {
    cin >> f[i];
    v.push_back(make_pair(f[i], false));
  }
  for(int i=0; i<m; i++) {
    cin >> c[i];
    v.push_back(make_pair(c[i], true));
  }

  sort(v.begin(), v.end());

  ll k = false;
  ll clks=0;

  for(auto i: v) {
    if(i.second != k) {
      clks++; k = !k;
    }
    // cout << i.first << " " << i.second << "\n";
  }
  cout << clks << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}