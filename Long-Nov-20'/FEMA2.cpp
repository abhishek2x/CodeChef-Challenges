/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k, i, j, P, S, magnet=0, iron=0, answer=0;
        cin >> n; cin >> k;
        string s; cin >> s;

        while(magnet < n && iron < n){
            if(s[magnet] == 'M'){
                if(s[iron] == 'I'){

                    if(magnet <= iron){
                        i = magnet; j = iron;
                    } else if(magnet > iron){
                        i = iron ; j = magnet;
                    }

                    S = 0; P=0;
                    for (int p = i+1; p < j; p++){   
                        if(s[p] == ':')
                            S++;
                    }
                    P = k+1-(j-i)-S;

                    if(P > 0){
                        answer++; 
                        magnet++; iron++;
                    } else if (P <= 0){
                        if(magnet < iron){
                            magnet++;
                        } else{
                            iron++;
                        }
                    }
                } else if(s[iron] == 'X'){
                    magnet = iron;
                    magnet++; iron++;
                } else{
                    iron++;
                }
            } else if(s[magnet] == 'X') {
                iron = magnet;
                magnet++; iron++;
            }
            else {
                magnet++;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}
