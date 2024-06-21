#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b [a];

    int c [a];

    int d [a];

    int x[a];

    int y[a];

    for (int e = 0; e < a; e++)
    {
        cin >> b[e] >> c[e] >> d[e];
    }

    for (int f = 0; f < a; f++)
    {
     x[f] = b[f] * c[f] + d[f];
     y[f] = (x[f] % 10) + (x[f] / 10% 10) + (x[f] / 100 %10) + (x[f] / 1000 %10) + (x[f] / 10000 %10) + (x[f] / 100000 %10) + (x[f] / 1000000 %10);
    }

    for (int g = 0; g < a; g++)
    {
        cout << y[g] << " ";
    }

    return 0;
}
