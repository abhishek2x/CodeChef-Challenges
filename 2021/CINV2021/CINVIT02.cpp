/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, k, ans=0; cin >> n;
  int v[35];
  memset(v, -1, sizeof(v));
  v[0] = 1;

  for(int i=1; i<=n; i++) {
    // cout << ans << "\n";
    cin >> k; v[k] = 1;

    bool is_green = true;
    for(int j=0; j <= k; j++) 
      if(v[j] == -1) {
        is_green = false; break;
      }
    
    if(is_green) ans++;
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