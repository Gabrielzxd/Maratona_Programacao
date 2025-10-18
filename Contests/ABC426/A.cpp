#include <bits/stdc++.h>
using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;
    map<string, int> name;
    name["Ocelet"] = 1;
    name["Serval"] = 2;
    name["Lynx"] = 3;
    
    if(name[X] >= name[Y]){
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }
    
    return 0;
}