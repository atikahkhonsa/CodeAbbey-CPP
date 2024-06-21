#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int l[a];

    float b[a];

    for (int i = 0; i < a; i++){
        cin >> b[i];
        l[i] = (b[i] * 6) + 1;
    }

    for (int z = 0; z < a; z++) {
        cout << l[z] << " " ;
    }

    return 0;
}
