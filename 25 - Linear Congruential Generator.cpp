#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int A[a], X[a], C[a], M[a], N[a], f[a];

    for (int i = 0; i < a; i++){
        cin >> A[i] >> C[i] >> M[i] >> X[i] >> N[i];

        for (int j = 0; j < N[i]; j++) {
            X[i] = (A[i] * X[i] + C[i]) % M[i];
        }
    }

    for (int ii = 0; ii < a; ii++){
        cout << X[ii] << " ";
    }

    return 0;
}
