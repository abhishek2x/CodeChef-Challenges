/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n; cin >> n;
  vector<ll> v; v.resize(n);
  for(ll i=0; i<n; i++ ) cin >> v[i];

  ll Mx=v[0];
  for(ll i=0; i<n; i++ ) Mx = max(v[i], Mx);

  ll tDiff=0;
  for(ll i=0; i<n; i++ ) tDiff += Mx-v[i];
  // cout << tDiff << "\n";

  if(tDiff == 0 || tDiff%2 == 1) 
    cout << "First\n";
  else 
    cout << "Second\n";
}
IRSTXOR
int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}