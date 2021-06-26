/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, k; cin >> n >> k;
  vector<int> v; v.resize(n);

  for(int i=0; i<n; i++) cin >> v[i];

  for(int i=0; i<n; i++) 
    if(v[i]%k == 0) cout << "1";
    else cout << "0";
  
  cout << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}