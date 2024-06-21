#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b;

    int c;

    int hasil [a];

    for (int i = 0; i < a; i++) {
        cin >> b >> c;

        hasil[i] = (b * c) - b;
    }

    for (int ii = 0; ii < a; ii++) {
        cout << hasil[ii] << " ";
    }
    return 0;


}
