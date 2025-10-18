#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string nome;
        cin >> nome;
        mp[nome]++;
    }
    string maisVotado;
    int maior = -1;
    for(auto [nome, qnt]: mp){
        if(qnt > maior){
            maior = qnt;
            maisVotado = nome;
        }
    }

    cout << maisVotado << endl;
}
