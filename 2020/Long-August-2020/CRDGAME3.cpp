/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int pc, pr;

    while (t--)
    {
        cin >> pc >> pr;

        int dc, dr, y, z;

        dc = pc / 9;
        y = pc % 9;
        if (y)
            dc = dc + 1;

        dr = pr / 9;
        z = pr % 9;
        if (z)
            dr = dr + 1;

        if (dc < dr)
        {
            cout << 0 << " " << dc;
        }
        else
        {
            cout << 1 << " " << dr;
        }
        cout << endl;
    }

    return 0;
}