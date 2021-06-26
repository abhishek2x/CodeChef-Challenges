/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  double U, V, A, S; cin >> U >> V >> A >> S;

  // limits -> V, A;


  // method-1: finding a
  double a = (U*U-V*V)/2*S;

  if(a<= A) cout << "Yes\n";
  else cout << "No\n";

  // // method-2: finding v
  // if(U <= V) {
  //   cout << "Yes\n"; return;
  // }

  // double v = sqrt(U*U - 2*A*S);
  // // cout << v;
  // if(v <= V) cout << "Yes\n";
  // else cout << "No\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}