/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool valid(ll i, ll j){
    ll numerator = (i*(j+1))+1;
    ll denominator = j*(i+1);
    cout << i << "=>" << numerator << " " << j << "=>" << denominator << "\n";
    return numerator == denominator;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll n, i, j; cin >> n;
    ll start = n/2;
    ll ans = 0;
    
    for (ll p = 1; p <= n; p++){
        for (ll q = p+1; q <= n; q++)
        {
            // cout << "*";
                // cout << p << " " << q << "\n";
            if(valid(p, q)){
                // cout << p << " " << q << "\n\n";
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}