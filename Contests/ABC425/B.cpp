#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<bool> used(N + 1, false);
    for (int i = 0; i < N; i++) {
        if (A[i] != -1) {
            if (used[A[i]]) {
                cout << "No\n";
                return 0;
            }
            used[A[i]] = true;
        }
    }

    vector<int> missing;
    for (int i = 1; i <= N; i++)
        if (!used[i])
            missing.push_back(i);

    int idx = 0;
    for (int i = 0; i < N; i++)
        if (A[i] == -1)
            A[i] = missing[idx++];

    cout << "Yes\n";
    for (int i = 0; i < N; i++)
        cout << A[i] << (i + 1 == N ? '\n' : ' ');

    return 0;
}
