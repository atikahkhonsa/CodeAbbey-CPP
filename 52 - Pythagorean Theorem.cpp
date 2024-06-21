#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b[a];
    int c[a];
    int d[a];
    int s[a];

    for (int i = 0; i < a; i++) {
        cin >> b[i];
        cin >> c[i];
        cin >> d[i];

        s[i] = sqrt(pow (b[i], 2) + (c[i] * c[i]));
    }

    for (int ii = 0; ii < a; ii++){
        if (d[ii] < s[ii]) {
            cout << "A ";
        }
        if (d[ii] == s[ii]) {
            cout << "R ";
        }
        if (d[ii] > s[ii]){
            cout << "O ";
        }
    }

    return 0;
}
