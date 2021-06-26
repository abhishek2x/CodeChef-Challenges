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

    ll t;
    cin >> t;
    while (t--)
    {
        ll h, p;
        cin >> h >> p;

        // h -> health
        // p -> power

        while (h > 0 && p > 0)
        {
            h = h - p;
            p = p / 2;
        }

        if (h <= 0)
            cout << 1 << endl;
        else 
            cout << 0 << endl;
    }

    return 0;
}