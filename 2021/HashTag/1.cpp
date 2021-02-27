
// source = [
//   ['.', '*', '.'],
//   ['*', '.', '*'],
//   ['.', '*', '.']
// ]
// figure = [
//   ['*', '*'],
//   ['*', '.']
// ]

bool checkIF(vector<vector<char>> &source, vector<vector<char>> &figure, int m, int n, int k) {
    int prob = 0;
    for(int i=0; i<figure.size(); i++, m++) {
        for(int j=0; j<figure[0].size(); j++, n++) {
           if(source[m][n] != figure[i][j]){
               prob++;
           }
           if(prob >= k) {
               return false;
           }
        }
    }
    return true;
}

vector<int> fitWithCellReplacements(vector<vector<char>> source, vector<vector<char>> figure, int k) {
    
    vector<int> ans;
    
    for(int i=0; i <= source.size()-figure.size(); i++) {
        for(int j=0; i <= source[0].size()-figure[0].size(); j++) {
            cout << i << " " << j << "\n";
            if(checkIF(source, figure, i, j, k)) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
    }
    return ans;
}
