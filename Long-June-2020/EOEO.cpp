/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// One out of two cases passed

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool getAns(int tom, int jerry){
    if(tom%2 == 0 && jerry%2 == 0)
        return getAns(tom/2, jerry/2);
    // if(tom%2 == 1 && jerry%2 == 1)
    //     return false;
    // if(tom%2 == 0 && jerry%2 == 1)
    //     return false;
    if(tom%2 == 1 && jerry%2 == 0)
        return true;
    
    return false;
    
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll ts;
        cin >> ts;

        ll ANS = 0;

        for (ll i = 1; i <= ts; i++)
        {
            if(getAns(ts, i))
                ANS++;
        }
        
        cout << ANS << endl;
    }

    return 0;
}
