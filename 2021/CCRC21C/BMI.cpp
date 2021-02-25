/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int m, h; cin >> m >> h;
    int bmi = m/(h*h);

    if(bmi <= 18) cout << 1 << "\n";
    if(bmi > 18 && bmi <= 24) cout << 2 << "\n";
    if(bmi > 24 && bmi <= 29) cout << 3 << "\n";
    if(bmi >= 30) cout << 4 << "\n";
  }

  return 0;
}