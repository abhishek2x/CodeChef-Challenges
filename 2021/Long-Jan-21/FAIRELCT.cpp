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
    ll n, m; cin >> n >> m;
    vector<ll> a, b;

    ll k1;
    ll sum1=0, sum2=0;
    for (ll i = 0; i < n; i++){
      cin >> k1;
      sum1 += k1;
      a.push_back(k1);
    }
    for (ll i = 0; i < m; i++){
      cin >> k1;
      sum2 += k1;
      b.push_back(k1);
    }
    
    ll operations=0, st=0, ed=m-1;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while((sum2>=sum1) && st<n && ed>0){
      sum2 -= b[ed];
      sum1 -= a[st];
      sum2 += a[st];
      sum1 += b[ed];
      st++; ed--;
      operations++;
      // cout << sum1 << " sums " << sum2 << "\n"; 
    }
    
    if(sum1 > sum2)
      cout << operations << "\n";
    else 
      cout << -1 << "\n";
  }
  return 0;
}
