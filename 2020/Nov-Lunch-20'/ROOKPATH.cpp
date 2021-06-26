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
    while(t--) {
        int N, M, k; cin >> N >> M;
        vector< vector<ll> > a(N, vector<ll> (N, 0));

        cout << "\n\n\n";
        int cnt = 1;
        for (ll i = 0; i < M; i++){
            int r, c;
            cin >> r >> c;
            a[r][c] = cnt++;
        }

        // Login was left
        // time up
    }

    return 0;
}