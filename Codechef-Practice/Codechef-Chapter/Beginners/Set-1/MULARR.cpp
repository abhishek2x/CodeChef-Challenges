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
    while(t--){
        ll n; cin >> n;
        ll ans = 1;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int k; cin >> k;
            ans *= k;
        }
        cout << ans << "\n";
    }    
    return 0;
}