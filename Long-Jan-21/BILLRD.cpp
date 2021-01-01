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
  while(t--){
    ll n, k, x, y; cin >> n >> k >> x >> y;

    k = k%4;
    char ch = 'L';

    while(k>0) {
      if((x == 0 && y == 0) || 
        (x == 0 && y == n) || 
        (x == n && y == 0) || 
        (x == n && y == n)) 
      {
        break;
      }

      int xNew, yNew;
      if(ch == 'L'){
        yNew = y + (n-x); xNew = n;
        ch = 'T';
      } else if(ch == 'T'){
        xNew = y; yNew = x;
        ch = 'R';
      } else if(ch == 'R'){
        yNew = n-x; xNew = 0;
        ch = 'B';
      } else if(ch == 'B'){
        yNew = 0; xNew = y;
        ch = 'L';
      }
      x = xNew; y = yNew; k--;
    }

    cout << x << " " << y << "\n";
  }

  return 0;
}
 