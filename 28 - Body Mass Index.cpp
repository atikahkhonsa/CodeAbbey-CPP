#include <iostream>

using namespace std;

int main () {
    int a;
    cin >> a;

    double b[a], c[a];
    double B[a];

    for (int i = 0; i < a; i++){
        cin >> b[i] >> c[i];
    }

    for (int ii = 0; ii < a; ii++) {
        B[ii] = b[ii] / (c[ii] * c[ii]);
    }

    for (int k = 0; k < a; k++){
        if (B[k]< 18.5) {
            cout << "under" << " ";
        }
        if (B[k] >= 18.5 && B[k] < 25.0) {
            cout << "normal" << " ";
        }
        if (B[k] >= 25.0 && B[k] < 30.0) {
            cout << "over" << " ";
        }
        if (B[k] >= 30.0 ) {
            cout << "obese" << " ";
        }
    }
    return 0;
}
