#include <iostream>

using namespace std;

int rumus (long long soal, long long t1 = 0, long long t2 = 1){
    int nextTerm;
    long double x = 1;

    for (int i = 0; i <= soal; i++){
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        t1 = t1 % soal;
        t2 = t2 % soal;
        x++;

        if (t2 % soal == 0){
            break;
        }
    }
    cout << x<< " ";
    return x;
}

int main(){
    long long int soal, banyakdata;
    cin >> banyakdata;

    for (int x = 0; x < banyakdata; x++){
        cin >> soal;
        rumus (soal);
    }
    return 0;
}
