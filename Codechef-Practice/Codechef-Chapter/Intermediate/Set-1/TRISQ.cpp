/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// Mathematical Formula
// f(B) = B/2 - 1 + f(B-2)
// here, B    - Base,
//       f(B) - Number of boxes

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll getBoxes(ll b){
    // base case
    if(b == 0 || b == 1 || b == 2 || b == 3) {
        return 0;
    }

    // recursive case
    return (b/2 - 1) + getBoxes(b-2);
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) {
        ll b; cin >> b;
        cout << getBoxes(b) << "\n";
    }

    return 0;
}