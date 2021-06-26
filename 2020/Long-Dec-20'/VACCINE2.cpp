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
    ll n, d; cin >> n >> d;
    vector<ll> v;
    ll k, at_rist=0, not_at_rist=0;
    
    for (int i = 0; i < n; i++){
      cin >> k;
      if(k<=9 || k>=80){
        at_rist++;
      } else{
        not_at_rist++;
      }
      v.push_back(k);
    }
    ll days=0;
    while(at_rist>0){
      days++;
      at_rist-=d;
    }
    while(not_at_rist>0){
      days++;
      not_at_rist-=d;
    }

    cout << days << "\n";
  } 
  return 0;
}
