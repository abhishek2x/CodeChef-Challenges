/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, m; cin >> n >> m;
  vector<int> v; v.resize(n);
  unordered_map<int, int> mp;

  for(int i=0; i<n; i++) cin >> v[i];
  for(auto i: v) mp[i]++;

  bool winning = false;

  for(int i=1; i<=m; i++) {
    if(mp.find(i) == mp.end()){
      winning = true; break;
    }
  }

  if(winning) cout << "Yes\n";
  else cout << "No\n";

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}