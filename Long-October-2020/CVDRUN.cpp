/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int N, K, X, Y, flag=0;
        cin >> N >> K >> X >> Y;
        int infected_cities = ceil((float)N/K);

        while(infected_cities--){
            if(Y == X){
                flag = 1;
                break;
            }
            else{
                X = (X+K)%N;
            }
        }
        if(flag == 1){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}