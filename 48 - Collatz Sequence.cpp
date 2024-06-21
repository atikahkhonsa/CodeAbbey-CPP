#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b[a];
    int j[a] = {0};

    for (int i = 0; i < a; i++){
        cin >> b[i];

        while (b[i] != 1) {
            if (b[i] %2 == 0){
             b[i] = b[i] / 2;
        }
        else {
            b[i] = 3 * b[i] + 1;
        }
        j[i]++;
        }
    }

    for (int k = 0; k < a; k++){
        cout << j[k] << " ";
    }
    return 0;
}
