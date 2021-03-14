/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, A=0, k=0; cin >> n;
  vector<ll> v; v.resize(n);
  for(ll i=0; i<n; i++ ) cin >> v[i];

  sort(v.begin(), v.end());
  
  for(int i=0; i<n; i++) {
    if(v[i]>i+1) {
      k=1; break;
    } A += (i+1-v[i]);
  }

  if(!k && A%2) cout << "First\n";
  else cout << "Second\n";

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}