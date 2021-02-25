/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first > b.first;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n;
    vector<pair<int, int> > a; a.resize(n);

    for(int i=0; i<n; i++) {
      cin >> k;
      a[i].first = k;
      a[i].second = i;
    }

    sort(a.begin(), a.end(), cmp);
    vector<int> ans; ans.resize(n);

    for (int i = 0; i < n; i++)
      ans[a[i].second] = i+1;
    
    for(int t: ans) cout << t << " ";
    cout << "\n";
    
  }

  return 0;
}