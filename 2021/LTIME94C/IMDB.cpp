/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, x; cin >> n >> x;
  unordered_map<ll, ll> mp;

  ll S, R;
  for(ll i=0; i<n; i++) {
    cin >> S >> R;
    if(mp[S] <= R)
      mp[S] = R;
  }

  ll mx = INT_MIN;
  for(auto i: mp) {
    if(i.first <= x && i.second >= mx) {
      mx = i.second;
    }
  }

  cout << mx << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}