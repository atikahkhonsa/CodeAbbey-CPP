#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a], n, tampungb[a];

    for (int i = 0; i < a; i++){
            cin >> b[i];
            tampungb[i] = b[i];
    }

    for (int i = 0; i < a; i++){
        for (int ii = 0; ii < a - 1; ii++){
            if (b[ii] > b[ii + 1]){
                n = b[ii];
                b[ii] = b[ii + 1];
                b[ii + 1] = n;
            }
        }
    }

    for (int j = 0; j < a; j++){
        for (int jj = 0; jj < a; jj++){
            if (tampungb[jj] == b[j]){
                b[j] = jj + 1;
            }
        }
    }

    for (int y = 0; y < a; y++){
        cout << b[y] << " ";
    }
    return 0;
}
