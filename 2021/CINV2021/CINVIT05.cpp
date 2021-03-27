/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, m, ans, k; cin >> n >> m;

  vector<int> v(1000004);

  for(int i=0; i<n; i++) {
    cin >> k;
    v[i] = k;
  }

  for(int i=0; ;i++) {
    if(v[i] >= m) 
      v[i+1] += (v[i]-m);
    else {
      ans = i+1; break;
    }
  }

  cout << ans << "\n";

} 

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}