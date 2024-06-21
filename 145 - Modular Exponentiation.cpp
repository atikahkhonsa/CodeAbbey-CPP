#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;

    long long int A[a], B[a], M[a], hasil, tampungh[a];

    for (int i = 0; i < a; i++){
        cin >> A[i] >> B[i] >> M[i];
    }

    for (int i = 0; i < a; i++){
        hasil = 1;
        while (B[i] > 0){
            if (B[i] % 2 == 1){
                hasil = ((hasil * A[i]) % M[i]);
            }
            B[i] = B[i] / 2;
            A[i] = (A[i] * A[i]) % M[i];
        }
        tampungh[i] = hasil;
    }
    for (int ii = 0; ii < a; ii++){
        cout << tampungh[ii] << " ";
    }
    return 0;
}
