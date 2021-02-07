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

  string t = "12:00 AM";
  cout << changeFormat(t);

  return 0;
}