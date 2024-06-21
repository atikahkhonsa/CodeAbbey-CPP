#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int hasil[a], n[a];

    for (int i = 0; i < a; i++){
        cin >> n[i];
    }

    for (int i = 0; i < 1000; i++){
        hasil = (log(n) + (log(5) / 2)) / log()
        hasil[i] = ((pow(1.61803398874989, n[i])) - (pow((1 - 1.61803398874989), n[i]))) / sqrt(5);
    }

    for (int ii = 0; ii < a; ii++){
        cout << hasil[ii] << " ";
    }
    return 0;
}
