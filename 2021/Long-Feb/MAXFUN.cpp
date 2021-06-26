/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    ll n, k, ans=INT_MIN; cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++){
      cin >> k;
      arr.push_back(k);
    }

    ll a1=INT_MAX, a2=INT_MIN;
    for (ll i = 0; i < n; i++)
    {
      a1 = min(a1, arr[i]);
      a2 = max(a2, arr[i]);
    }
        
    ll finalAns = INT_MIN;
    for (int i = 1; i < n-1; i++)
    {
      ll a3=arr[i];
      finalAns = max(finalAns, (abs(a1-a2)+abs(a3-a2)+abs(a1-a3)));
    }
     
    cout << finalAns << "\n";
  }

  return 0;
}