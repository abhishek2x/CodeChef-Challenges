/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n; cin >> n;
  vector<ll> v; v.resize(n);

  for(int i=0; i<n; i++) cin >> v[i];

  bool all_odd = true;
  ll sum = 0;
  
  for(int i=0; i<n; i++) {
    if(all_odd && v[i]%2 == 0) all_odd = false;
    sum += v[i];
  }

  if(sum%2 == 0) {
    cout << "0\n";
    return;
  }
  
  // Odd sum

  if (all_odd) {
    cout << "-1\n";
    return;
  }

  cout << "1\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}