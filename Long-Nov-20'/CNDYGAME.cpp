/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007


ll getSumTill(vector<ll> v, ll step, ll n) {
    ll sum=0;
    ll candy=0;
    for (int i = 0; i < step; i++){
        candy = v[(i-1)%n+1];
        sum = (sum+candy)%M;
    }
    return sum%M;
}

ll switchingSum(vector<ll> A, ll n, ll step, ll SUM){
    bool block;
    if(A[n-1]%2 == 1){
        block = false;
    } else {
        block = true;
    }
    ll sum=0, times=0, left=0;
    if(step <= n){
        sum = getSumTill(A, step, n);
    } else {
        times = step/n; left = step%n;
        if(block){
            times = times/2;
        }
        sum = (((SUM * times)%M) + getSumTill(A, left, n))%M;
    }
    return sum;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector <ll> A;

        ll k, SUM=0;
        for (int i = 0; i < n; i++){
            cin >> k; A.push_back(k);
        }
        SUM = getSumTill(A, n, n);

        ll Q; cin >> Q;
        vector <ll> R;

        ll l;
        for (int i = 0; i < Q; i++){
            cin >> l; R.push_back(l);
        }

        for (int i = 0; i < Q; i++)
        {
            //  get sum of first R[i] intergets of Array A 
            // Also consider switching after n iterations

            ll sumR = switchingSum(A, n, R[i], SUM);
            cout << sumR << "\n";
        }
    }
    return 0;
}