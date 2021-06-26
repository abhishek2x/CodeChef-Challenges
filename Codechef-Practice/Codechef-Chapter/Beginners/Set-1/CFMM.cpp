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
        vector<ll> v(26);
        while(n--){
            string s; cin >> s;
            for (int i = 0; i < s.length(); i++)
                v[int(s[i]-97)]++;
        }
        // if( v[2] > 1 &&
        //     v[3] > 0 && 
        //     v[4] > 1 && 
        //     v[5] > 0 && 
        //     v[7] > 0 && 
        //     v[14] > 0) {
        //         cout << 
        // }

        cout << min({v[2]/2, v[3], v[4]/2, v[5], v[7], v[14]}) << "\n";
    }
    return 0;
}