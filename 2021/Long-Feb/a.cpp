/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

unordered_map<ll, ll> mp;

void getForIth(vector<ll> v, vector<ll> v1, ll len)
{
  if (v.size() == 0)
  {
    ll k=0;
    for (ll i = 0; i < v1.size(); i++)
      k = (k ^ v1[i]);
    cout << v1.size() << "==" << k << "\n";
    mp[v1.size()] = (mp[v1.size()] + k) ;
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

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  vector<ll> v = {1, 3, 5, 2};
  vector<ll> v1 = {};

  ll len = 3;

  for(auto i: mp) {
    cout << i.first << "-" << i.second << "\n";
  }

  getForIth(v, v1, len);
  cout <<  "\n==\n";


  for(auto i: mp) {
    cout << i.first << "-" << i.second << "\n";
  }

  return 0;
}