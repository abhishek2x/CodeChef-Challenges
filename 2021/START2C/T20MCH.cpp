/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll r, o, c; cin >> r >> o >> c;

  if((c+((20-o)*36)) > r)
    cout << "Yes";
  else cout << "No";
  return 0;
}