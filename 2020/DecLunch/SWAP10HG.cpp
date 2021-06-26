#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string S, P;
        cin >> S >> P;
        
        int ones=0, zeros=0;
        
        for(int i=0; i<n; i++) {
            if(S[i] != P[i]) {
                if(S[i] == '0')
                    zeros++;
                else if(S[i] == '1')
                    ones++;
            }
        }
        if(zeros != ones) {
            cout << "No\n";
            continue;
        }
        
        int ans=true;
        int c1=0;
        
        for(int i=0; i<n; i++) {
            if(S[i] != P[i]) {
                if(S[i] == '0') {
                    if(c1>0) {
                        c1--;
                    } else {
                        ans=false;
                        break;
                    }
                } else {
                    c1++;
                }
            }
        }
        
        if(ans) cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}



// /*!
// * Copyright (c) 2020 Abhishek Srivastava
// */

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int replacableZeroes(string s, int size) {
//   for(ll i=size-1; i >=0; i--) {
//     if(s[i] == '1') {
//       return i;
//     }
//   }
//   return -1;
// }

// int main(){

//   ios :: sync_with_stdio(false);
//   cin.tie(0);

//   ll t; cin >> t;
//   while(t--) {
//     ll n; cin >> n;
//     string s1, s2;
//     cin >> s1 >> s2;
    
//     ll placesNotSame=0;
//     ll z1=0, z2=0;
//     for (ll i = 0; i < n; i++)
//     {
//       if(s1[i] != s2[i])
//         placesNotSame++;
//       ll v1 = s1[i] - '0';
//       ll v2 = s2[i] - '0';
//       z1 += v1;
//       z2 += v2;
//     }

//     // sum not equal
//     if(z1 != z2) {
//       cout << "No\n";
//     } else {
//       // strings squal
//       if(s1 == s2) {
//         cout << "Yes\n";
//       } 
//       else { // main game
//         // get index of last 1
//         ll lastIdx = replacableZeroes(s1, n);
//         ll replacables = n-(lastIdx+1);
//         // cout << replacables << " " << placesNotSame/2 << "-> ";

//         if(replacables >= placesNotSame/2)
//           cout << "Yes\n";
//         else 
//           cout << "No\n";
//       }
//     }
//   }
//   return 0;
// }