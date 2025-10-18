#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int alf[26] = {0}; 
    
    for(int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';
        alf[index]++;

    }
    
    char save;
    for(int i = 0; i < 26; i++) {
        if(alf[i] == 1) {
            save = static_cast<char>(i + 'a');
            break;
        }
    }
    cout << save << endl;
    return 0;
}