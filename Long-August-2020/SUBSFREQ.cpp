/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void subsFreq(vector<ll> a, ll index, vector<ll> temp, ll N)
{
    if (index == N)
    {
        if (temp.size() != 0)
        {
            cout << 1;
        }
    }
    else
    {
        subsFreq(a, index + 1, temp, N);
        temp.push_back(a[index]);
        subsFreq(a, index + 1, temp, N);
    }
}

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;

        vector<ll> a;
        vector<ll> temp;

        for (ll i = 0; i < N; i++)
        {
            ll k;
            cin >> k;
            a.push_back(k);
        }

        subsFreq(a, 0, temp, N);
    }

    return 0;
}