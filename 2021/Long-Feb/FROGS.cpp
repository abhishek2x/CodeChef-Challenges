/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.first < b.first); 
} 

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> l, w;
    // vector<pair<int, pair<int, int> > > arr(1000, make_pair(-1, make_pair(-1, -1))); 
    int k;

    for (int i = 0; i < n; i++) {
      cin >> k; w.push_back(k);
    }
    for (int i = 0; i < n; i++) {
      cin >> k; l.push_back(k);
    }


  }

  return 0;
}