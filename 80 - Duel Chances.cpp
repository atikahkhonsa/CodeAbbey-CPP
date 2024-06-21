#include <iostream>
#include <cmath>


using namespace std;

int main (){
    int a;
    cin >> a;
    int hasil[a];
    double b[a], c[a], x;

    for (int i = 0; i < a; i++){
        cin >> b[i] >> c[i];

        x = b[i] /  (1 - (1 - b[i] / 100) * (1 - c[i] / 100 ));
        hasil[i]=round(x);
    }
    for (int ii = 0; ii < a; ii++){
    cout << hasil[ii] << " ";
    }
    return 0;
}
