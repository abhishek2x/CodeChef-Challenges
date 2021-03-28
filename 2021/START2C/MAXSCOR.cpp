/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
// #define int long long int

int dp[1005][10005];


int Knap(vector<int>& m, vector<int>& t, int n, int limit) {
  if(n == 0 || limit == 0) return 0;

  if(dp[n][limit] != -1) return dp[n][limit];

  if(t[n-1] > limit) {
    return dp[n][limit] = Knap(m, t, n-1, limit);
  } 
  else {
    return dp[n][limit] = max(m[n-1] + Knap(m, t, n-1, limit-t[n-1]), Knap(m, t, n-1, limit));
  }
  return 0;
}

void solve() {

  memset(dp, -1, sizeof(dp));

  int n, k; cin >> n >> k;
  vector<int> m; m.resize(n);
  vector<int> t; t.resize(n);

  for(int i=0; i<n; i++) cin >> m[i] >> t[i];

  int ans = Knap(m, t, n, k);

  vector<pair<int, int> > mk;
  for(int i=0; i<n; i++) 
    mk.push_back(make_pair(m[i], t[i]));
  
  sort(mk.begin(), mk.end());

  cout << ans - mk[0].first << "\n";

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}