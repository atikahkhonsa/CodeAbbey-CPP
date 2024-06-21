#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    int n[a], x[a];

    string input1[a];
    double M[a] = {0}, Di = 0, tampungsigma = 0, hasil[a], hasilakhir, input2[14];

    for (int k = 0; k < a; k++){
        cin >> input1[k];
        tampungsigma = 0;
        M[k] = 0;
        for (int i = 0; i < 14; i++){
        cin >> input2[i];
        M[k] += input2[i];
    }
    M[k] = (M[k] / 14);
     for (int i = 0; i < 14; i++){

        tampungsigma += ((input2[i] - M[k]) * (input2[i] - M[k]));

    }
     hasil[k] = sqrt (tampungsigma / 14);

    }

    for (int ii = 0; ii < a; ii++){
        if (hasil[ii] >= ((4 * M[ii]) / 100)){
        cout << input1[ii] << " ";
    }
    }
    return 0;
}
