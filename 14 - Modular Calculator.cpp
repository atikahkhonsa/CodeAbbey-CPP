#include <iostream>

using namespace std;

int main (){
    int y[1000];
    char a[1000];

    char x;
    int b = 0, z, i = 0;
    cin >> z;

    while (x != '%'){
        cin >> x >> b;
        a[i] = x;
        y[i] = b;
        i++;
    }

    for (int ii = 0; ii < i; ii++){
        if (a[ii] == '*') {z = (z * y[ii])%y[i-1];}
        else if (a[ii] == '+') {z = (z + y[ii] % y[i-1]);}
    }
    cout << z%y[i-1];
    return 0;
}
