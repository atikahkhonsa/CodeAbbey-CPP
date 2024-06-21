#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double P, R, L, X, M;
    int A;

        cin >> P >> R >> L;
    R=((R/100)/12);
    X = pow(R+1,L);
    M = P * (R * X / (X - 1));
    A=ceil(M);

    cout << A;
    return 0;
    }
