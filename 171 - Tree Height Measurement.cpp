#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int a;
    cin >> a;

    double H[a], D[a], p[a], t[a], hasil[a], r[a], s[a];

    for (int i = 0; i < a; i++){
        cin >> H[i] >> D[i];
    }

    for (int ii = 0; ii < a; ii++){
        s[ii] = (D[ii] * 3.141592653589793238463) / 180;
        p[ii] = ((90 * 3.141592653589793238463) / 180) - s[ii];

        hasil[ii] = H[ii] * (-tan((p[ii])));
    }

    for (int e = 0; e < a; e++){
        cout << round (hasil[e]) << " ";
    }
    return 0;
}
