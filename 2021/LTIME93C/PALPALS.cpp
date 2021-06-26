/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    string s; cin >> s;
    int arr[26] = {0};
    for(char ch: s) arr[ch-'a']++;

    int ones=0;
    int evens=0;

    for(int no: arr) {
      if(no>0){
        if(no == 1) ones++;
        if(no%2 == 0) evens++;
      }
    }
    // cout << ones << "-" << evens << "\n";
    if(ones == evens || ones == 1) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}