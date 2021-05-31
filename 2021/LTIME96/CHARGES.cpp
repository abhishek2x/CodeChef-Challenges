/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  int n, k; cin >> n >> k;
  string str; cin >> str;
  vector<int>  v;
  int temp;

  for(int i=0; i<k; i++) {
    cin >> temp;
    temp--;
    v.push_back(temp);
  }

  int initialDistance = str.length()-1;
  cout << "Initial Length: " << initialDistance << "\n\n";

  for(int i=0; i<k; i++) {
    int center = v[i];

    // For middle Elements

    if(center-1 >= 0 && str[center] == str[center-1])
      initialDistance--;
    else if(center-1 >= 0 && str[center] != str[center-1])
      initialDistance++;
    
    if(center+1 <= n-1 && str[center] == str[center+1])
      initialDistance--;
    else if(center+1 <= n-1 && str[center] != str[center+1])
      initialDistance++;

    if(str[center] == '1') str[center] = '0';  
    else str[center] = '1';  

    // cout << str << "\n";

    cout << initialDistance << "\n";   
  }
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}