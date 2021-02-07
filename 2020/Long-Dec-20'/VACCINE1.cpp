/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll d1, v1, d2, v2, p;
  cin >> d1 >> v1 >> d2 >> v2 >> p;

  ll nov=0, days=0;

  while(nov < p){
    // cout << nov << " " << days << "\n";
    days++;
    if(days >= d1){
      nov+=v1;
    }
    if(days >= d2){
      nov+=v2;
    }
  }
  cout << days;
  return 0;
}
