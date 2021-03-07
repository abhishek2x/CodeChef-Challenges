/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

long long getMinDis(int k, vector<int> b, int p) {
  // two cases
  long long g, l;
  if(k>p) {
    g=k; l=p;
  } else {
    g=p; l=k;
  }

  // between k  and p
  for(int i=l; i<=g; i++) {
    if(b[i] == 1) {
      return g-l;
    }
  }

  //before k or after p
  int left=l-1, right=g+1;
  while(true) {
    if(left >=0) {
      if(b[left] == 1) {
        return (g-l) + (l-left);
      }
    }
    if(right <= b.size()) {
      if(b[right] == 1) {
        return (g-l) + (right-g);
      }
    }
    left--; right++;
  }
}
long long minimumTimeHire2021(vector<int> dr, vector<int> bat, int p) {
  int b[100005] = {0};
  for(auto i: bat) {
    b[i] = 1;
  }

  long long ans=0;
  for(auto i: dr) {
    ans += getMinDis(i, bat, p);
  }

  return ans;

}
