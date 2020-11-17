/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;

        int c[n];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        sort(c, c+n, greater<int>());
        
        int Sf=c[0], Ss=0;
        
        
        for (int i = 1; i < n; i++){
            if(Ss <= Sf)
                Ss += c[i];
            else 
                Sf += c[i];
        }

        cout << max(Ss, Sf) << "\n";
    }
    return 0;
}
