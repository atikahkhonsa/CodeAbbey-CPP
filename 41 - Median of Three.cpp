#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    int b[a], c[a], d[a], x[a];

    for (int i = 0; i < a; i++)
    {
        cin >> b[i] >> c[i] >> d[i];
        if ((c[i] < b[i] && b[i] < d[i]) || (d[i] < b[i] && b[i] < c[i]))
        {
            x[i] = b[i];
        }
        else if (((b[i] < c[i] && c[i] < d[i]) || (d[i] < c[i] && c[i] < b[i])))
        {
            x[i] = c[i];
        }
        else
        {
            x[i] = d[i];
        }
    }

    for (int j = 0; j < a; j++)
    {
        cout << x[j] << " ";
    }

    return 0;
}
