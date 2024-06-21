#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b [a], c[a], d[a];
    for (int e = 0; e < a; e++){
        cin >> b[e] >> c[e] >> d[e];
    }

    int jum;
    for (int f = 0; f < a; f++){
        jum = 0;
    do {
            jum += b[f] + (d[f]-1)*c[f];
            d[f]--;
    }
    while (d[f] != 0);
    cout << jum << " " << flush;
    }
return 0;
}
