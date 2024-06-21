#include <iostream>

using namespace std;

int main (){
    int a, j;
    cin >> a;

    double s[a], r[a], p[a], b;

    for (int i = 0; i < a; i++){
        cin >> s[i] >> r[i] >> p[i];
        j = 0;
    while (s[i] <r[i]) {

            b = ((p[i] / 100) * s[i]);\
            s[i] += b;
            j++;
        }
        cout << j << " ";
    }

    return 0;
}
