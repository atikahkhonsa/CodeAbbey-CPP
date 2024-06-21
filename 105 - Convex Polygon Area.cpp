#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;

    double x[a], y[a], hasil, total, akhir;

    for (int i = 0; i < a; i++){
        cin >> x[i] >> y[i];
    }

    for (int j = 0; j < a; j++){
            if (j == a - 1){
                 hasil = ((x[j] * y[0]) - (y[j] * x[0]));
                 total += hasil;
            }
            else {
        hasil = ((x[j] * y[j + 1]) - (y[j] * x[j + 1]));
        total += hasil;
            }
    }
    akhir = abs(total / 2);
    cout << setprecision(12) << akhir << " ";

    return 0;
}
