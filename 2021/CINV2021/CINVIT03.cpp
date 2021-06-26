/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int getMinMax(vector<int> &k, int i) {
  
  int mn=INT_MAX, mx = INT_MIN;
  for(int j=0; j<k.size(); j++) {
    if(k[j] > mx) mx = k[j];
    if(k[j] < mn && k[j] > 0) mn = k[j];
  }
  // cout << "---" << mn << " " << mx << "---\n";
  return mn+mx;
}

int larGest(vector<int>& k) {
  
  int lar = INT_MIN;
  int index = 0;

  for (int i = 0; i < k.size(); i++) 
    if(k[i] > lar) {
      lar = k[i]; index = i;
    }

  k[index] = INT_MIN;
  // cout << lar << "---\n";
  return lar;  
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int n, m; cin >> n >> m;
  vector<int> knap;
  vector<int> cb;

  knap.resize(n); cb.resize(m);
  int l;
  for(int i=0; i<n; i++) {cin >> l; knap[i] = l;}
  for(int i=0; i<m; i++) {cin >> l; cb[i] = l;}

  // sort(knap.begin(), knap.end(), greater<int>());

  int i=0, ans=0;
  while(i<m) {
    if(i == m-1) {
      ans += getMinMax(knap, i);
      break;
    }
    else {
      int temp = larGest(knap);
      ans += (2*temp);
    }
    i++;
    // cout << ans << "\n";
  }

  cout << ans;

  return 0;
}