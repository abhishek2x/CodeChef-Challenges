/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

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

        vector<int> array = {0};

        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            array.push_back(k);
        }

        unordered_map<int, bool> mapper;

        for (auto &&i : array)
        {
            mapper[i] = false;
        }
        int result;
        for (auto &&i : mapper)
        {
            result++;
        }
        cout << result-1 << endl;
    }

    return 0;
}