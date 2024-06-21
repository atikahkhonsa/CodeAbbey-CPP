#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b[a], c[a], d[a], e[a], f[a], g[a], h[a], j[a];
    int x[a], y[a], hasil, H, J, M,D;

    for (int i = 0; i < a; i++) {
        cin >> b[i] >> c[i] >> d[i] >> e[i] >> f[i] >> g[i] >> h[i] >> j[i];

        x[i] = ((b[i] * 86400) + (c[i] * 3600) + (d[i] * 60) + e[i]);
        y[i] = ((f[i] * 86400) + (g[i] * 3600) + (h[i] * 60) + j[i]);

        hasil = y[i] - x[i];
        H = hasil / 86400;
        hasil = hasil % 86400;

        J = hasil / 3600;
        hasil = hasil % 3600;

        M = hasil / 60;
        hasil = hasil % 60;

        D = hasil;

        cout << "("<<H<< " " << J<<" " << M<<" " << D<<")";
    }

    return 0;
}
