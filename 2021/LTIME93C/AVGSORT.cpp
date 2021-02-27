/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    ll n; cin >> n;
    vector<ll> v; v.resize(n);
    unordered_map<int, int> mp;
    
    for(int i=0; i<n; i++) cin >> v[i];
    for(int a: v) mp[a]++;

    bool ans = false;

    for(auto e: mp) {
      if(e.second > 2) {
        ans = false;
        break;
      }
      if(e.second == 2 && e.first%2 == 1) {
        ans = false;
        break;
      } 
      else {
        ans = true;
      }
    }

    if(ans) cout << "Yes\n";
    else cout << "No\n"; 

  }

  return 0;
}