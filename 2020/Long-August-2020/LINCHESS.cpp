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
        ll n, k;
        cin >> n >> k;

        ll *p = NULL;
        p = new ll[1000000000];

        for (ll i = 0; i < n; i++)
        {
            ll element;
            cin >> element;
            p[element] = 1;
        }

        p[k] = 2;
        int flag = 0;

        for (ll i = 0; i < k + 1; i++)
        {
            ll ele = i;
            if (p[i] == 1)
            {
                for (ll j = i; j < k + 1; j += ele)
                {
                    if (p[j] == 2)
                    {
                        flag = 1;
                        cout << i << endl;
                        break;
                    }
                    ele = j;
                }
            }
        }

        if (flag == 0)
            cout << -1 << endl;
    }

    return 0;
}