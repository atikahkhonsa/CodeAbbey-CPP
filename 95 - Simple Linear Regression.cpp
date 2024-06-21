#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double tampungx = 0, tampungy = 0, tampungxy = 0, tampungxkuadrat = 0, tampungx2 = 0;
    int n1, n2;
    cin >> n1 >> n2;

    double a, b;
    int n = (n2 - n1) + 1;
    double x[n], y[n];
    string z; //karena ada :

    for (int i = 0; i < n; i++){
        cin >> z >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++){
        tampungx += x[i];
        tampungy += y[i];
        tampungxy += (x[i] * y[i]);
        tampungxkuadrat += (x[i] * x[i]);
    }

    tampungx2 += (tampungx * tampungx);
    b = ((n * tampungxy) - (tampungx * tampungy)) / ((n * tampungxkuadrat) - tampungx2);
    a = (tampungy / n) - (b * (tampungx / n));

    cout << setprecision(12) <<  b << " " << a;
    return 0;
}
