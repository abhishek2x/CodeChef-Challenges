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
  while(t--) {
    ll n, k, d;
    cin >> n >> k >> d;

    ll ip, sum=0;
    for(ll i=0; i<n; i++){
      cin >> ip;
      sum += ip;
    }
    cout << min(sum/k, d) << "\n";
  }

  return 0;
}