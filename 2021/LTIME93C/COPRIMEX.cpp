/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isCoprime(int a, int b) {     
  return __gcd(a, b) == 1;
} 

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    ll L, R; cin >> L >> R;
    ll cnt=2;
    bool done=false;
    ll ans;

    while(true){
      for (ll i = L; i <= R; i++)
      {
        if(!isCoprime(i, cnt)) break;

        if(i == R) {
          done = true;
          ans = cnt;
        }
      }
      if(done) break;
      cnt++;
    }

    cout << ans << "\n";
  }

  return 0;
}