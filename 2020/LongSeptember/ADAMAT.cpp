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

        int n;
        cin >> n;

        int a[4][4] = {0};

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        int result = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] != 1)
            {
                result++;
                i += 1;
            }
            else
                continue;
        }
        cout << result << endl;
    }

    return 0;
}