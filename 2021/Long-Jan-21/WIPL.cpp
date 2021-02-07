/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// Below is greedy approach which shows that it can't be solved using this method.

// Lets go for DP

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    ll n, k; cin >> n >> k;
    vector<ll> h;
    ll k1, sum=0;

    for (ll i = 0; i < n; i++) {
      cin >> k1;
      sum += k1;
      h.push_back(k1);
    }

    sort(h.begin(), h.end(), greater<int>());

    for (ll i = 0; i < h.size(); i++)
      cout << h[i] << " ";
    cout << "\n";

    ll leftSum=0, rightSum=0, i, cnt=0;
    for (i = 0; i < h.size(); i++)
    {

      if(leftSum >= k && rightSum >= k){
        cout << i << " f ";
        break;
      } else {
        if(leftSum <= rightSum) {
          leftSum += h[i];
        } else {
          rightSum += h[i];
        }
      }

      cout << i << " " << leftSum << " " << rightSum << "\n";
    }

    // cout << i << "\n";
  }
  return 0;
}
