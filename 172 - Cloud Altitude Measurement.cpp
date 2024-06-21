#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    double a1[n], b1[n], d2[n], A[n], B[n], H[n];
    int d1[n];

    for (int i = 0; i < n; i++){
        cin >> d1[i] >> A[i] >> B[i];
    }

    for (int ii = 0; ii < n; ii++){
        a1[ii] = (A[ii] * 3.141592653589793238463) / 180;
        b1[ii] = (B[ii] * 3.141592653589793238463) / 180;

        d2[ii] = (tan(a1[ii]) * d1[ii]) / (tan(b1[ii]) - tan(a1[ii]));
        H[ii] = tan(b1[ii]) * (d2[ii]);
    }

    for (int e = 0; e < n; e++){
        cout << round (H[e]) << " ";
    }
    return 0;
}
