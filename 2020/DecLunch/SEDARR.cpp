#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;

		vector <int> v;

		int item;
		long long int sum=0;
		
		for(int i=0; i<n; i++) {
			cin >> item;
			sum += item;
			v.push_back(item);
		}
		
		if(sum%k == 0) {
			cout << 0 << "\n";
		} else {
			cout << 1 << "\n";
		}

	}
}
