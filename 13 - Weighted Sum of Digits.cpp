#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int aa;
    cin >> aa;

    int a[aa], b[aa], c, d[aa], l, p,t,y,n;

    for (int i = 0; i < aa; i++) {
        cin >> a[i];
        l = a[i];
        c = 0;
    while(l!=0){

        l=l/10;
        c++;

    } int digit[c];
        while (a[i] != 0) {
            digit[c - 1] = a[i] % 10;
            a[i] /= 10;
            c--;
        } int n = 0;
        for (int ii = 0; ii < sizeof (digit) / sizeof (int); ii++) {
            n += digit [ii] * c;
        }
    }
    return 0;
}
