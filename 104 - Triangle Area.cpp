#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    long double b[a], c[a], d[a], e[a], f[a], g[a], s[a];
    long double hasil[a], pr[a], qr[a], pq[a];

    for (int i = 0; i < a; i++) {
        cin >> b[i] >> c[i] >> d[i] >> e[i] >> f[i] >> g[i];

        pr[i] = sqrt (pow(b[i] - d[i],2) + pow(c[i] - e[i],2));
        qr[i] = sqrt (pow (b[i] - f[i],2) + pow(c[i] - g[i],2));
        pq[i] = sqrt (pow (d[i] - f[i],2) + pow(e[i] - g[i],2));

        s[i] = (pr[i] + qr[i] + pq[i]) / 2;
        hasil[i] = sqrt (s[i] * (s[i] - pr[i]) * (s[i] - qr[i]) * (s[i] - pq[i]));
    }
    for (int i = 0; i < a; i++) {
        cout << setprecision (10) << hasil[i] << " ";
    }
    return 0;
}
