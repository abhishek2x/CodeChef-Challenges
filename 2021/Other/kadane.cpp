/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void playKadane(vector<int>& v) {
  int csum=0;
  int bsum=0;
  int start, end;

  for(int i=0; i<v.size(); i++) {
    if(csum >= 0) {
      csum += v[i];
    } else {
      csum = v[i];
      start = i;
    }
    if(bsum < csum) {
      bsum = csum;
      end = i;
    }
  }

  cout << "Best: " << bsum << "\n";
  cout << "Start: " << start << "\nEnd: " << end << "\n"; 
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {4, 3, -2, 6, 7, -10, -10, 4, 5, 9, -3, 4, 7, -28, 2, 9, 3, 2, 11};

  playKadane(v);

  return 0;
}