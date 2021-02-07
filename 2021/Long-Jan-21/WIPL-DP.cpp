/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int boxesNeeded(vector<ll> coins, ll amount, ll n)
{
  ll *dp = new ll[amount*2+1];

  for (ll i = 0; i < amount*2+1; i++)
  {
    dp[i] = INT_MAX;
  }

  dp[0] = 0;

  for (ll rupee = 1; rupee <= amount*2; rupee++)
  {
    // Iterate over coins
    for (ll i = 0; i < n; i++)
    {
      if (coins[i] <= rupee)
      {
        ll smallerAns = dp[rupee - coins[i]];
        // backtracking
        if (smallerAns != INT_MAX)
        {
          dp[rupee] = min(dp[rupee], smallerAns + 1);
        }
      }
    }
  }
  return dp[amount];
}

int main()
{

  ios ::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n, k;

    vector<ll> h;
    ll k1;

    for (ll i = 0; i < n; i++)
    {
      cin >> k1;
      h.push_back(k1);
    }

    cout << boxesNeeded(h, k, n);
  }
  return 0;
}