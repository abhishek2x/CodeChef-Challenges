/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    ll sm=INT_MAX;
    for (ll i = 0; i < n; i++){
        int e; cin >> e;
        if(e < sm) sm = e;
    }
    
    if(k-sm > 0){
        cout << k-sm;
    } else cout << 0;

    return 0;
}