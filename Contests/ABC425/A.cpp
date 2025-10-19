#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + pow(-1, i) * pow(i, 3);
    }
    cout << sum << endl;
}