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
        vector<ll> f;
        vector<ll> c;
        
        for (int i = 0; i < N; i++) {
            cin >> k;
            f.push_back(k);
        }

        for (int i = 0; i < N; i++) {
            cin >> k;
            c.push_back(k);
        }

        ll kms=f[0], petrol=f[0], counter=1, requirement=1;
        while(counter < N){
            if(petrol < 0){
                petrol++;
                requirement++;
            }
            else {
                petrol += f[counter];
            }
            counter++;
        }
        // cout << requirement;'

        ll cost = *min_element(c.begin(), c.end());
        cout << cost << "\n";
    }
    return 0;
}
