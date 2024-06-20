#include <iostream>
#include <cmath>

using namespace std;

int FPB(int a, int b){
    int hasil;

    do{
        if(a > b){
            if(a % b != 0){
                a = a % b;
            }
            else{
                a = a - b;
            }
        }
        else{
            if(b % a != 0){
                b = b % a;
            }
            else{
                b = b - a;
            }
        }
    }
    while(a != b);
    hasil = a;
    return hasil;
}

int KPK(int a, int b){
    return(a * b) / FPB(a, b);
}

int main(){
    int input;
    cin >> input;
    int i, ii, fpb[input], kpk[input];

    for(int I = 0, I < input; I++){
        cin >> i >> ii;
        fpb[I] = FPB(i, ii);
        kpk[I] = KPK(i, ii);
    }
    for(int I = 0, I < input; I++){
        cout << kpk[I];
    }

    return 0;
}