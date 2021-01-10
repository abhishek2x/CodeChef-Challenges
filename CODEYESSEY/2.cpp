/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 2*1000000000

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    ll k, n; cin >> n >> k;

    ll left = n-k, temp, t;
    vector<ll> placed;

    cin >> t;
    if(t > 2){
      placed[0] = 1;
      left--;
    }

    for (ll i = 0; i < k; i++) {
      cin >> temp;
      placed.push_back(temp);
    }
    
    ll r=0;
    ll diff, s, e, val;

    for (ll i = 0; i < k; i++)
    {
      diff = placed[i] - placed[i-1] - 3;
      if(diff > 0){
        r = ceil(diff/2);
        if(left-r <= 0){
          // val = left + r
          e = placed[i];
          s = placed[i-1];
          break;
        } else {
          left -= r;
        }
      }
    }
    cout << s << " " << e << "\n";
    // cout << ans << "\n";
  }

  return 0;
}