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
    ll n; cin >> n;
    vector<string> arr; string s;

    for (ll i = 0; i < n; i++) { 
      cin >> s; arr.push_back(s);
    }
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = i+1; j < n; j++)
      {
        string s1="", s2="";
        s1 = arr[i]; s1[0] = arr[j][0];
        s2 = arr[j]; s2[0] = arr[i][0];
        if(s1[0] != s2[0]){
          if((find(arr.begin(), arr.end(), s1) == arr.end()) && (find(arr.begin(), arr.end(), s2) == arr.end()))
          {
              // cout << s1 << " " << s2 << "\n";
            ans++;
          }
        }
      }
    }
    
    cout << ans*2 << '\n';
  }

  return 0;
}