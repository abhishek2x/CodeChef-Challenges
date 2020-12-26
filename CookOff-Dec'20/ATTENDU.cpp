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
    ll n; cin >> n;
    string bits; cin >> bits;

    int ones=0, zeros=0;
    for (ll i = 0; i < n; i++)
    {
      if(bits[i] == '0'){
        zeros++;
      } else {
        ones++;
      }
    }
    // cout << ones << " " << zeros << "\n";

    ones += 120-n;

    // cout << ones << " " << zeros << "\n";

    // cout << " " << (ones*100)/120 << " ";

    if((ones*100)/120 >= 75){
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    
  }

  return 0;
}