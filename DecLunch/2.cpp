#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
  ios :: sync_with_stdio(false);
  cin.tie(0);
	
	ll t;
	cin >> t;
	
	while(t--){
	  ll n, m;
	  cin >> n >> m;
    ll arr[n][m];
    int e;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            cin >> e;
            arr[i][j] = e;
        }
    }
    
    ll q;
    cin >> q;
    
    while(q--) {
      ll x, y, v;
      cin >> x, y, v;
      
      // save prev value
      
      arr[x-1][y-1] = v;
			

			for (ll i = 0; i < n; i++) {
				for (ll j = 0; j < m; j++) {
					
				}
			}
			
    }
        
	}
	return 0;
}
