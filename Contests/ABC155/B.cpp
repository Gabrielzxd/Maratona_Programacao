#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }
    int maior = -1;
    for(auto [name, qnt]: mp){
        if(qnt > maior){
            maior = qnt;
        }
    }
    vector<string> maiores;
    for(auto [name, qnt]: mp){
        if(qnt == maior){
            maiores.push_back(name);
        }
    }
    sort(maiores.begin(), maiores.end());
    for(string nome: maiores){
        cout << nome << endl;
    }
    return 0;
}
