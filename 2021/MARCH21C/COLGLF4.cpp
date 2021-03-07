/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll ans=0;

ll getans(ll n, ll egg, ll choco, ll Omelette, ll shake, ll cake) {
   
  if(n == 0) return 0;
  if((egg < 2 && choco == 0) && n != 0) return 10e7;
  if((egg == 0 && choco < 3) && n != 0) return 10e7;
  if(egg == 0 && choco == 0) return 10e7;

  ll SecondAns=10e7, FirstAns=10e7, ThirdAns=10e7;
  
  if(egg >= 2)
    FirstAns = Omelette + getans(n-1, egg-2, choco, Omelette, shake, cake);

  if(choco>=3)
    SecondAns = shake + getans(n-1, egg, choco-3, Omelette, shake, cake);
  
  if(egg >= 1 && choco >= 1)
    ThirdAns = cake + getans(n-1, egg-1, choco-1, Omelette, shake, cake);

  return ans = min(SecondAns, min(FirstAns, ThirdAns));
}

void solve() {
  ll n, egg, choco, Omelette, shake, cake; 
  cin >> n >> egg >> choco >> Omelette >> shake >> cake;
  
  ll ANS = getans(n, egg, choco, Omelette, shake, cake);
  if(ANS >= 10e7) cout << -1 << "\n";
  else cout << ANS << "\n";
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--)
    solve();

  return 0;
}