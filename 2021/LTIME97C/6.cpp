#include<bits/stdc++.h>
using namespace std;

bool checkBox(vector<vector<int>> v, int n, int m, int k, int val) {
    
}

void check() {
    int N, M, K; 
    cin >> N >> M >> K;

    vector<vector<int>> v( N , vector<int> (M, -1));    
    
    int a, b;
    for(int i=0; i<N*M; i++) {
        cin >> a >> b;
        if(i%2){
            v[a-1][b-1] = 0;
            if(checkBox(v, n, m, K, 0)) {
                cout << "Bob\n"; 
                break;
            }
        }
        else {
            v[a-1][b-1] = 1;
            if(checkBox(v, n, m, K, 1)) {
                cout << "Alice\n"; 
                break;
            }
        }
    }
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<M; j++) 
    //         cout << v[i][j] << " ";
    //     cout << "\n";
    // }
}

int main() {
    int t; cin >> t;
    while(t--) check();
}