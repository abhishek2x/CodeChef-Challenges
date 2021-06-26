#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        double A, B, X;
        cin >> A >> B >> X;

        cout << ceil((B-A)/X) << "\n";
    }

}