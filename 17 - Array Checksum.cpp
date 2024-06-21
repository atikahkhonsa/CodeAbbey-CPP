#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin >> a;

    long long int b[a], c, d = 0;

    for (int i = 0; i < a; i++) {
        cin >> b[i];
        d = ((d + b[i]) * 113) % 10000007;
    }
    cout << d;
    return 0;
}
