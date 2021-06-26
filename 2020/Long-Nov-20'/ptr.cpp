/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    // char* ch;
    // string str = "Hello";
    // ch = &str[0];

    // cout << *ch << "\n";
    // cout << *(ch+1) << "\n";

    // ch = ch+1;

    // cout << *ch << "\n";
    // cout << *(ch+1) << "\n";
    ll n=4;
    ll sum=0;
    ll candy=0;
    for (int i = 0; i < 8; i++){
        // candy = v[(i-1)%n+1];
        cout << "---" << n << "---\n";
        cout << ((i-1)%4)+1 << " " << ((i-1)%n)+1 << "\n";
        sum = (sum+candy)%1000000007;
    }
    return 0;
}