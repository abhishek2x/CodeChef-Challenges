/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define LIMIT 4000001

vector<bool> prime(LIMIT, true);
vector<int> aintPrime(LIMIT);

void getSieve() {
    for (int i = 2; i*i < LIMIT; i++){
        if(prime[i]){
            for (int j = i*i; j < LIMIT; j+=i)
                prime[j] = false;            
        }
    }
    int i=0;
    for (int p=2; p < LIMIT; p++) 
       if (prime[p]) 
          aintPrime[i++] = p;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
    getSieve();
    
    int t;  cin >> t;
    while(t--){

        int n; 
        cin >> n;
        vector<int> B(n);
        vector<int> A(n);

        for (int i = 0; i < n; i++)
            cin >> B[i];
        
        for (int i = 0; i < n; i++)
            A[i] = aintPrime[i];
        
        for (int i = 0; i < n; i++){
            if(B[i] != i+1){
                A[i] = aintPrime[B[i]-1];
            }
        }
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
        
        cout << "\n";
    }
    return 0;
}
