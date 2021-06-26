/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll X, Y, N, ans=0;
        cin >> X >> Y >> N;
        for (ll Z = 0; Z <= N; Z++){
            ll f = X^Z;
            ll g = Y^Z;
            if(f < g){
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}