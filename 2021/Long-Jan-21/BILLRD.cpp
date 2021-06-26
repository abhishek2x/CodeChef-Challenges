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
    ll n, k, x, y; cin >> n >> k >> x >> y;
    
    k = k%4;
    if(k==0) k+=4;

    if(x > y) {
      // below x = y
      if(k == 1) {
        cout << n << " " << y+(n-x) << "\n";
      } else if(k == 2) {
        cout << y+n-x << " " << n << "\n";
      } else if(k == 3) {
        cout << 0 << " " << x-y << "\n";
      } else if(k == 4) {
        cout << x-y << " " << 0 << "\n";
      }
    } else if(x == y) {
      cout << n << " " << n << "\n";
    } else if(x < y) {
      // above x = y
      if(k == 1) {
        cout << x+(n-y) << " " << n << "\n";
      } else if(k == 2) {
        cout << n << " " << x+(n-y) << "\n";
      } else if(k == 3) {
        cout << y-x << " " << 0 << "\n";
      } else if(k == 4) {
        cout << 0 << " " << y-x << "\n";
      }
    }
  }


  return 0;
}