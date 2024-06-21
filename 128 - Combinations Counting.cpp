#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int a, b;
    cin >> a;

    long double N[a], K[a],hasil;


    for (int i = 0; i < a; i++) {
        cin >> N[i] >> K[i];
    }

    for (int ii = 0; ii < a; ii++) {
    b = N[ii]-K[ii];
        long double h = 1;
        for (int x = b; x >= 1; x--){
            h = h * x;
        }
        long double z = 1;
    for (int j = N[ii]; j >= 1; j--){
            z = z * j;
    }
        long double y = 1;
        for (int jj = K[ii]; jj >= 1; jj--){
            y = y * jj;
        }
    hasil = z / (y * h);
    cout << setprecision(11) << hasil << " ";
    }

    return 0;
}
