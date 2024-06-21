#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a, X;
    cin >> a;

    int A = 445, C = 700001, M = 2097152, N[a], tampung;
    string konsonan = "bcdfghjklmnprstvwxz", vokal = "aeiou";

    for (int i = 0; i < a; i++){
        cin >> N[i];
    }

    for (int j = 0; j < a; j++) {
            for (int jj = 0; jj < N[j]; jj++){
                X = (A * X + C) % M;
                if (jj % 2 == 1){
                    tampung = X % 5;
                    cout << vokal[tampung];
                }
                else if (jj % 2 == 0){
                    tampung = X % 19;
                    cout << konsonan[tampung];
                }
            }
            cout << " ";
        }
    return 0;
}
