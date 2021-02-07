#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll t;
	cin >> t;

	while(t--){
		ll x, y, k, n;
		cin >> x >> y >> k >> n;

		ll diff = abs(x-y);
		
		if((diff%k) !=  0) {
			cout << "NO\n";
		} else if((diff%(2*k)) == 0){
			cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	}
}

