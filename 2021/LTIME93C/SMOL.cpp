/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--){
    ll n, k; cin >> n >> k;                              

    ll fac = n/k;
    if(fac) n = n-(k*fac);
    cout << n << "\n";
  }

  return 0;
}