/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int changeFormat(string s) {
  int h0 = (int)s[0] - '0';
  int h1 = (int)s[1] - '0';
  int m0 = (int)s[3] - '0';
  int m1 = (int)s[4] - '0';
  
  int hour = h0*10+h1;
  int min = m0*10+m1;

  int finalTime = 0;

  if(s[6] == 'A'){
    if(hour == 12){
      hour -= 12;
    }
  } else {
    if(hour != 12){
      hour += 12;
    }
  }
  finalTime = hour*100 + min;
  return finalTime;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    
    string P, p1; cin >> P >> p1;
    P += " " + p1;
    int n; cin >> n;
    vector<string> arr;
    string L, l1, R, r1;


    for (int i = 0; i < n; i++) {
      cin >> L  >> l1 >> R >> r1;
      L += " " + l1; R += " " + r1;
      // cout << "\n" << changeFormat(L) << " " << changeFormat(P) << " " << changeFormat(R) << "\n";
      if((changeFormat(L) <= changeFormat(P)) && (changeFormat(R) >= changeFormat(P)))
        cout << "1";
      else cout << "0";
    }
    cout << "\n";
  }

  return 0;
}