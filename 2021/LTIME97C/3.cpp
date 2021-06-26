#include<bits/stdc++.h>
using namespace std;

bool beta_check(string s) {
    if(s.length() == 0) return false;

    bool flag=true;

    for(char ch: s) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            flag = true;
        else {flag = false; break;}
    }
    return flag;
}

void check(string s) {

    // cout << "\n--\n\n--\n";
    int len = s.length();

    if(s[0] != '<' && s[1] != '/') {
        cout << "Error\n"; return;
    }
    if(s[len-1] != '>') {
        cout << "Error\n"; return;
    }

    string s1 = s.substr(2, len-3);
    // cout << "\n" <<  s1 << "\n";
    if (beta_check(s1)) 
        cout << "Success\n";
    else 
        cout << "Error\n";
}

int main() {

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        check(s);
    }

}