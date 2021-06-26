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
        ll n; cin >> n;
        vector<int> freq(25);
        string s; cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            int value = int(s[i]) - 97;
            // cout << value << " ";
            freq[value]++;
        }
        for (ll i = 0; i < 26; i++)
        {
            if(freq[i] > 0){
                cout << char(i+97);
                break;
            }
        }
        
        cout << "\n";
    }
    return 0;
}