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
        ll N, k; cin >> N;
        vector<ll> a;
        
        for (int i = 0; i < N; i++) {
            cin >> k;
            a.push_back(k);
        }

        ll kms=a[0], petrol = a[0], counter = 1;
        if(a[0] > 0){
            while(counter < a.size()){
                // cout << kms << " " << petrol << "\n";
                petrol += a[counter];
                petrol--; 
                if(petrol == 0)
                    break;
                kms += a[counter];
                counter++;
            }
        }
        cout << kms << "\n";
    }

    return 0;
}