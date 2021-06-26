/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 10006

ll ans=0;
ll dp[MAX][MAX];

ll getans(ll n, ll egg, ll choco, ll Omelette, ll shake, ll cake) {
   
  if(n == 0) return 0;
  if((egg < 2 && choco == 0) && n != 0) return MAX;
  if((egg == 0 && choco < 3) && n != 0) return MAX;
  if(egg == 0 && choco == 0) return MAX;

  ll SecondAns=MAX, FirstAns=MAX, ThirdAns=MAX;
  if(dp[egg][choco] == -1) {
    if(egg >= 2){
      if (dp[egg-2][choco] == -1)
        FirstAns = Omelette + getans(n-1, egg-2, choco, Omelette, shake, cake);
      else FirstAns = dp[egg-2][choco];
    }
    
    if(choco>=3){
      if (dp[egg][choco-3] == -1)
        SecondAns = shake + getans(n-1, egg, choco-3, Omelette, shake, cake);
      else SecondAns = dp[egg][choco-3];
    }
    
    if(egg >= 1 && choco >= 1){
      if (dp[egg-1][egg-1] == -1)
        ThirdAns = cake + getans(n-1, egg-1, choco-1, Omelette, shake, cake);
      else ThirdAns = dp[egg-1][egg-1];
    }

    return dp[egg][choco] = min(SecondAns, min(FirstAns, ThirdAns));
  } else {
    return dp[egg][choco];
  }
}

void solve() {
  ll n, egg, choco, Omelette, shake, cake; 
  cin >> n >> egg >> choco >> Omelette >> shake >> cake;

  for (int i = 0; i < MAX; i++) {
    dp[0][i]=0;
    dp[i][0]=0;
  }
  
  ll ANS = getans(n, egg, choco, Omelette, shake, cake);
  if(ANS >= MAX) cout << -11 << "\n";
  else cout << ANS << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--){
    memset(dp, MAX, sizeof(dp));
    solve();
  }
  return 0;
}