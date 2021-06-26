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
    ll A, B; cin >> A >> B;

    ll even_from_A = A/2;
    ll even_from_B = B/2;
    ll odd_from_A = (A+1)/2;
    ll odd_from_B = (B+1)/2;

    // (e+e || o+o)

    cout << (even_from_A*even_from_B) + (odd_from_A*odd_from_B) << "\n"; 
  }

  return 0;
}

// 4
// 1 1
// 2 3
// 4 6
// 8 9

// 2
// 4
// 11
// 25
