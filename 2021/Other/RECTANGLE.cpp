/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool getDone() {
  int N, M; cin >> N >> M;
  int arr[N][M] = {0};
  vector<string> str; str.resize(M);

  for (int i = 0; i < M; i++) cin >> str[i];

  for(int i=0; i<str.size(); i++) 
    for(int j=0; j<str[i].length(); j++) 
      arr[i][j] = str[i][j] - '0';

  int rowMin=INT_MAX;
  int colMin=INT_MAX;
  int rowMax=INT_MIN;
  int colMax=INT_MIN;

  for (int i = 0; i < N; i++)
    for (int k = 0; k < M; k++)
      if(arr[i][k] == 1) {
        rowMax = max(rowMax, i);
        colMax = max(colMax, k);
        rowMin = min(rowMin, i);
        colMin = min(colMin, k);
      }
  // cout << "rowMin: " << rowMin << "\n";
  // cout << "rowMax: " << rowMax << "\n";
  // cout << "colMin: " << colMin << "\n";
  // cout << "colMax: " << colMax << "\n";
  

  for(int i=rowMin; i<=rowMax; i++) {
    for(int j=colMin; j<=colMax; j++) {
      if(arr[i][j] == 0){
        // cout << "Caught: " << i << ", " << j << "\n";
        return false;
      }
    }
  }

  return true;

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;

  while(t--) {
    if(getDone()) cout << "YES\n";
    else cout << "NO\n";
  }
  
  return 0;
}