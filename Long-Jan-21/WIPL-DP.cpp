/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int coinsNeeded(vector<ll> coins, int amount, int n){
    
    // Base case
    if(amount == 0){
        return 0;
    }

    int ans = INT_MAX;
    // Rec
    for (int i = 0; i < n; i++)
    { 
        if(amount-coins[i] >= 0){
            // Solution of each tree is a kinda smaller answer
            int smallerAns = coinsNeeded(coins, amount-coins[i], n);
            // backtracking
            if(smallerAns != INT_MAX)
                ans = min(ans, smallerAns+1);
        }
    }
    return ans;
}


int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    ll n, k; cin >> n, k;

    vector<ll> h; ll k1;

    for (ll i = 0; i < n; i++) {
      cin >> k1; h.push_back(k1);
    }

    cout << coinsNeeded(h, k, n) << " ";

  }
  return 0;
}