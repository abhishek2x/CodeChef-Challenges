/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);
  int n; cin >> n;

  unordered_map<int, pair<int, int> > mp;

  for(int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    if(y == 0) mp[x].second += 1;
    else mp[x].first += 1;
  }

  int ans=0;
  for(auto i: mp) {
    // cout << i.first << " " << i.second.first << " " << i.second.second << "\n";
    if(i.second.first > i.second.second)
      ans += i.first*i.second.first;
    else if (i.second.first < i.second.second)
      ans -= i.first*i.second.second;
    else ans += i.first*i.second.first;
    
    // cout << ans << " ";
  }

  cout << ans;

  return 0;
}