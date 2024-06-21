#include <iostream>

using namespace std;

int main () {
    string c;
    int n;

    // secret number
    cin >> c;


    // amount of hint
    cin >> n;
    string hint;
    int a[n] = {0}, b[n] = {0};

    //a[] = correct, wrong poss. b[] = all correct
    for (int ii = 0; ii < n; ii++){
            cin >> hint;

        for (int x1 = 0; x1 < 4; x1++){
            if (hint[x1] == c[x1]){
                a[ii]++;
            }
        }
        for (int y = 0; y < 4; y++){
        for (int yy = 0; yy < 4; yy++){
            if (y == yy){
                continue;
            }
            if (hint[y] == c[yy]){
                b[ii]++;
            }
        }
    }

    }
    for (int ii = 0; ii < n; ii++){
    cout << a[ii] << "-" << b[ii] << " ";
    }
    return 0;
}
