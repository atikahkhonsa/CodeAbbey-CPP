#include <iostream>
#include <cmath>

using namespace std;

double rumus (double far){
    return (far - 32) * 5/9;
}

int main(){
    int a;
    cin >> a;

    int far[a];
    double hasil [a];

    for(int i = 0; i < a; i++) {
        cin >> far[i];
        hasil[i] = rumus(far[i]);
        cout << round (hasil[i]) << " ";
    }

    return 0;
}