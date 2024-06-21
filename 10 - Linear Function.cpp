#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;

    cin >> a;

    int b[a], c[a], d[a], e[a], f[a], g[a];

    for (int h = 0; h < a; h++)
    {
        cin >> b[h] >> c[h] >> d[h] >> e[h];
        f[h] = (c[h] - e[h]) / (b[h] - d[h]);
        g[h] = c[h] - (b[h] * f[h]);
    }

    for (int i = 0; i < a; i++)
    {
        cout << "(" << f[i] << " " << g[i] << ") ";
    }

    return 0;
}
