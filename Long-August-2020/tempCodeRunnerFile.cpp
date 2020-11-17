/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int Manipulate(vector<ll> p, int k)
{
    for (ll i = 0; i < k + 1; i++)
    {
        int ele = i;
        if (p[i] == 1)
        {
            for (ll j = i; j < k + 1; j += ele)
            {
                if (p[j] == 2)
                {
                    return i;
                }
                ele = j;
            }
        }
        return -1;
    }
}

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> p{0};

        for (ll i = 0; i < n; i++)
        {
            ll element;
            cin >> element;
            p[element] = 1;
        }

        p[k] = 2;

        cout << Manipulate(p, k) << endl;
    }

    return 0;
}