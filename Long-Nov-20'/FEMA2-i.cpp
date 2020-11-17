/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

pair<int, bool> getPower(string str, int len, int magnet, int iron, int k){
    int i, j;
    if(magnet < iron){
        i = magnet;
        j = iron;
    }
    else if(magnet > iron){
        i = iron ;
        j = magnet;
    }
    bool block = false;
    int P, S = 0;
    for (int p = i+1; p < j; p++){   
        if(str[p] == 'X')
            block = true;
        if(str[p] == ':')
            S++;
    }
    P = k+1-(j-i)-S;
    return make_pair(P, block);
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k; 

        string s; cin >> s;
        int ans = 0;
        vector <int> Magnet;
        vector <int> Iron;

        for (int i = 0; i < n; i++){
            if(s[i] == 'M'){
                Magnet.push_back(i);
            }
            else if(s[i] == 'I'){
                Iron.push_back(i);
            }
        }
        
        char *magnet, *iron; 
        int mPos=0, iPos=0;

        if(iPos < Iron.size())
            iron = &s[Iron[iPos]];
        if(mPos < Magnet.size())
            magnet = &s[Magnet[mPos]];

        while(iPos < Iron.size() && mPos < Magnet.size())
        {
            pair<int, bool> combi = getPower(s, n, Magnet[mPos], Iron[iPos], k);     
            int P = combi.first; bool block = combi.second;

            if(P <= 0){
                if(Iron[iPos] > Magnet[mPos] && mPos+1 < Magnet.size()){
                    mPos += 1;
                    magnet = &s[Magnet[mPos]];
                }
                else if(Iron[iPos] < Magnet[mPos] && iPos+1 < Iron.size()){
                    iPos += 1;
                    iron = &s[Iron[iPos]];
                }
            } else if(P > 0) {
                if(!block){
                    ans++;
                    // cout << "-" << Magnet[mPos] << " " << Iron[iPos] << "-";
                }
                if(mPos+1 < Magnet.size()){
                    mPos += 1;
                    magnet = &s[Magnet[mPos]];
                } else break;
                if(iPos+1 < Iron.size()){
                    iPos += 1;
                    iron = &s[Iron[iPos]];
                } else break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}