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
  while(t--){
    vector<int> a(10);

    for (int i = 0; i < 10; i++)
      cin >> a[i];
    int sum; cin >> sum;
    int ans;

    for(int i=9; i>=0; i--) {
      if(a[i]>0) {
        // cout << a[i] << " - " << sum << "\n";
        if(sum-a[i] >= 0) {
          sum -= a[i];
        } else {
          ans = i+1;
          break;
        }
      }
    }

    cout << ans << "\n";

  }

  return 0;
}