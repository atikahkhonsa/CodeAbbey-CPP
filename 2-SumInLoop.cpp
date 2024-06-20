#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a], hasil[a];

    for(int i = 0; i < a; i++){
        cin >> b[i];
        hasil[i] = 0;
        hasil[i] = hasil[i] + b[i];
    }

    cout << hasil[a] << endl;

    return 0;
}