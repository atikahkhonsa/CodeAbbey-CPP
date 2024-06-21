#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int y;
    cin >> y;

    int A[y], B[y], C[y], e[y], x1[y], x2[y];

    for (int i = 0; i < y; i++){
        cin >> A[i] >> B[i] >> C[i];
    }

    for (int ii = 0; ii < y; ii++){
        e[ii] = (B[ii] * B[ii]) - (4*A[ii]*C[ii]);
        if (ii < y - 1){
            if (e[ii] >= 0){
            x1[ii] = (-B[ii] + sqrt((B[ii] * B[ii]) - (4*A[ii]*C[ii]))) / (2*A[ii]);
            x2[ii] = (-B[ii] - sqrt((B[ii] * B[ii]) - (4*A[ii]*C[ii]))) / (2*A[ii]);
            cout << x1[ii] << " " << x2[ii] << "; ";
        }
            else {
            x1[ii] = -B[ii] / (2 * A[ii]);
            x2[ii] = sqrt (abs(e[ii])) / (2 * A[ii]);
            cout << x1[ii] << "+" << x2[ii] << "i " << x1[ii] << "-" << x2[ii] << "i; ";
        }
        }
        else {
            if (e[ii] >= 0){
            x1[ii] = (-B[ii] + sqrt((B[ii] * B[ii]) - (4*A[ii]*C[ii]))) / (2*A[ii]);
            x2[ii] = (-B[ii] - sqrt((B[ii] * B[ii]) - (4*A[ii]*C[ii]))) / (2*A[ii]);
            cout << x1[ii] << " " << x2[ii] << " ";
        }
            else {
            x1[ii] = -B[ii] / (2 * A[ii]);
            x2[ii] = sqrt (abs(e[ii])) / (2 * A[ii]);
            cout << x1[ii] << "+" << x2[ii] << "i " << x1[ii] << "-" << x2[ii] << "i ";
        }
        }

    }
    return 0;
}
