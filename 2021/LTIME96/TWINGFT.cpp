/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> v;
  int temp;
  for(int i=0; i<n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end(), greater<int>());

  ll sum1=0, sum2=0;

  for (int i = 0; i < 2*k; i++)
  {
    if(i%2)
      sum1 += v[i];
    else sum2 += v[i];
  }

  sum1 += v[2*k];
  
  if(sum1 >= sum2) cout << sum1 << "\n";
  else cout << sum2 << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}