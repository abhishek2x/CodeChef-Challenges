/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  ll n, m, k; cin >> n >> m >> k;
  ll ans=0;

  for(int i=1; i<n+1/2; i++)
    for(int j=1; j<=i; j++)
      if(true){
        cout << i+j+k << " ";
        ans ^= (i+j+k);
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