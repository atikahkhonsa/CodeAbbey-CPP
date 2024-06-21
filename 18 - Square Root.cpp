#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int d;
    cin >> d;

    double x[d], r[d], p[d];

    for (int i = 0; i < d; i++) {
        cin >> x[i] >> p[i];
        r[i] = 1;
        for(int j = 0; j < p[i]; j++){
             r[i] =  (r[i]  +  (x[i] / r[i])) / 2;
        }
    }

    for (int ii = 0; ii < d; ii++){
        cout << setprecision (12) << r[ii] << " ";
    }

    return 0;
}
