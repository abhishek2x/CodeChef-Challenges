/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, h, x; cin >> n >> h >> x;
  vector<int> arr; arr.resize(n);

  for(int i=0; i<n; i++) cin >> arr[i];

  int required = h-x;

  if(find(arr.begin(), arr.end(), required) < arr.end()) {
    cout << "YES";
  } else cout << "NO";

} 

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
    
  solve();

  return 0;
}