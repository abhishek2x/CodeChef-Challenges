/*
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

        string S, P;
        cin >> S >> P;

        ll s[26] = {0};
        ll s2[26] = {0};

        for (ll i = 0; i < S.length(); i++)
            s[S[i] - 'a']++;

        for (ll i = 0; i < P.length(); i++)
            s[P[i] - 'a']--;

        ll mainIndex = P[0] - 'a';

        // if (mainIndex)
        //     mainIndex -= 1;

        string ans1 = "", ans2 = "";

        for (ll i = 0; i < 26; i++)
            s2[i] = s[i];

        for (ll i = 0; i <= mainIndex; i++)
        {
            while (s[i])
            {
                ans1 += char(97 + i);
                s[i]--;
            }
        }

        ans1 += P;

        for (ll i = 0; i < 26; i++)
        {
            while (s[i])
            {
                ans1 += char(97 + i);
                s[i]--;
            }
        }

        for (ll i = 0; i < mainIndex; i++)
        {
            while (s2[i])
            {
                ans2 += char(97 + i);
                s2[i]--;
            }
        }

        ans2 += P;

        for (ll i = 0; i < 26; i++)
        {
            while (s2[i])
            {
                ans2 += char(97 + i);
                s2[i]--;
            }
        }

        cout << min(ans2, ans1) << endl;
    }

    return 0;
}
