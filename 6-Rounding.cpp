#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    cin >> a;

    double b, c, d;
    int hasil;

    for(int i = 0; i < a; i++){
        cin >> b >> c;
        d = b / c;

        if(d > 0){
            hasil = d + 0.5;
        }

        else{
            hasil = d - 0.5;
        }
    cout << hasil << " ";
    }

    return 0;
}