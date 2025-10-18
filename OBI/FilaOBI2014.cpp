#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<int> identificador(N);
    for (int i = 0; i < N; i++) {
        cin >> identificador[i];
    }
    cin >> M;
    vector<int> deixaram_fila(M);
    for (int i = 0; i < M; i++) {
        cin >> deixaram_fila[i];
    }
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < identificador.size(); i++) {
            if (identificador[i] == deixaram_fila[j]) {
                identificador.erase(identificador.begin() + i);
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < identificador.size(); i++) {
        if (i > 0) cout << " ";
        cout << identificador[i];
    }
    cout << endl;
    return 0;
}