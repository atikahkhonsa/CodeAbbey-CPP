#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int a;
    cin >> a;

    string v;

    int vow[a];
    cin.ignore ();

    for (int z = 0; z < a; z++) {
         getline (cin, v);
            vow[z] = 0;

    for (int i = 0; i < v.length(); i++){
        if (v[i] == 'a' || v[i] == 'i' || v[i] == 'u' || v[i] == 'e' || v[i] == 'o' || v[i] == 'y') {
            vow[z] ++;
        }
    }
    }
    for (int ii = 0; ii < a; ii++){
        cout << vow [ii] << " ";
    }

    return 0;
}
