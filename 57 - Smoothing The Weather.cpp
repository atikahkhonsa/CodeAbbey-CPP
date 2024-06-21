#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int a;
    cin >> a;

    double b[a], hasil[a];

    for (int i = 0; i < a; i++){
        cin >> b[i];
    }
    cout << b[0] << " ";
    for (int ii = 0; ii < a-2; ii++){
        hasil[ii] = (b[ii] + b[ii+1] + b[ii+2]) / 3;

    cout << setprecision (12) << hasil[ii] << " ";

    }
    cout << b[a-1];
    return 0;
}
