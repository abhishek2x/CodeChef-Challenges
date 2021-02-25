/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MODULO 998244353

unordered_map<ll, ll> mp;

void getForIth(vector<ll> v, vector<ll> v1, ll len)
{
  if (v.size() == 0)
  {
    ll k = 0;
    for (ll i = 0; i < v1.size(); i++)
      k = (k ^ v1[i]) % MODULO;
    mp[v1.size()] = (mp[v1.size()] + k) % MODULO;
    return;
  }

  vector<ll> op1 = v1;
  vector<ll> op2 = v1;

  op2.push_back(v[0]);
  v.erase(v.begin() + 0);

  getForIth(v, op1, len);
  getForIth(v, op2, len);

  return;
}

int main()
{

  ios ::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n;

  vector<ll> v;
  vector<ll> v1(0, 0);

  ll k;
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    v.push_back(k);
  }

  ll q;
  cin >> q;
  ll q1 = q, m = INT_MIN;
  vector<ll> LMT;

  while (q--)
  {
    ll limit;
    cin >> limit;
    LMT.push_back(limit);
    m = max(m, limit);
  }

  getForIth(v, v1, m);

  for (ll i = 0; i < q1; i++)
    cout << LMT[i] << "=" << mp[LMT[i]] << "\n";
    ll fAns=0;
    while(LMT[i] > 0) {
      fAns += mp[LMT[i]]
      LMT[i]--;
    }
  return 0;
}
