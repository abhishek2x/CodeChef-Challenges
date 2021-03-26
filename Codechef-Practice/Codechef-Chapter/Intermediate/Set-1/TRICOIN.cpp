/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LIMIT 1000000000

ll sum(ll h){
    return (h*(h+1))/2;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll h=1;
        while(sum(h) <= n)
            h++;
        cout << h-1 << "\n";
    }
    return 0;
}
