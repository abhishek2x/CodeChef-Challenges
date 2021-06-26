/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {

  ll n, egg, choco, Omelette, shake, cake; 
  cin >> n >> egg >> choco >> Omelette >> shake >> cake;

  ll ans=0, i;

  if(Omelette >= shake && shake >= cake) {
    while(n>0) {
      bool running=false;
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }

  else if(Omelette >= cake && cake >= shake) {
    while(n>0) {
      bool running=false;
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }

  else if(shake >= Omelette && Omelette >= cake) {
    while(n>0) {
      bool running=false;
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }

  else if(shake >= cake && cake >=  Omelette) {
    while(n>0) {
      bool running=false;
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }
  
  else if(cake >= Omelette && Omelette >= shake) {
    while(n>0) {
      bool running=false;
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }

  else if(cake >= shake && shake >=  Omelette) {
    while(n>0) {
      bool running=false;
      if(egg >= 2) {
        ll add = min(n, egg/2);
        ans += add*Omelette; egg-=add; n-=add; running=true;
      }
      if(choco >= 3) {
        ll add = min(n, choco/3);
        ans += add*shake; choco-=add; n-=add; running=true;  
      }
      if(egg >= 1 && choco >= 1) {
        ll add = min(n, min(egg, choco));
        ans += add*cake; egg-=add; choco-=add; n-=add; running=true;
      }
      if(running == false) break;
      // cout << ans << "\n";
    }
  }
  if(n != 0)
    cout << -1 << "\n";
  else cout << ans << "\n";

}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}