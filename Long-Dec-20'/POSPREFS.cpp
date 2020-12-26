/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;

  while(t--) {
    int n, k; cin >> n >> k;
    int v[n];

    for (int i = 0; i < n; i++)
      v[i] = i+1;

    for (int i = 0; i < n-k; i++)
      v[i] *= -1;

    for (int i = 0; i < n; i++)
      cout << v[i] << " ";

    cout << "\n";
  }

  return 0;
}