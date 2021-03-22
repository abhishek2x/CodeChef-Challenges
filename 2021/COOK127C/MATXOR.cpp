/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, m, k; cin >> n >> m >> k;
  int ans=0;

  for(int i=1; i<=n; i++)
    if(min(i, m)% 2) 
      ans ^= (1+i+k);

  for(int j=2; j<=m; j++)
    if(min(n, m-j+1)%2) 
      ans ^= (n+j+k);

 
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