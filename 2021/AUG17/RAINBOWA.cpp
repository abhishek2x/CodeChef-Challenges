/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n; cin >> n;
  vector<int> v; v.resize(n);
  for(int i=0; i<n; i++) cin >> v[i];

  int k;
  if(n%2) k = n/2;
  else k = n/2-1;

  int left=k-1, right=k+1;
  bool ans=true;

  while(k--) {
    cout << v[left] << "\t" << v[right] << "\n";
    if(v[left] != v[right]){
      ans = false; break;
    }
    left--; right++;
  }

  if(ans == true) cout << "yes\n";
  else cout << "no\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}