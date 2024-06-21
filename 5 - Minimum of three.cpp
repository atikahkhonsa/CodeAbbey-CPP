#include <iostream>
#include <cmath>

using namespace std;

int main () {
int a ;
cin >> a;

int b [a], c [a], d [a];
for (int e = 0; e<a ; e++) {
    cin >> b [e] >> c [e] >> d [e];
}
for (int f = 0; f < a ; f++) {
    if (b [f] < c [f]) {
        if (b [f] < d [f]){
            cout << b[f] << " ";
        }
        else {
            cout << d[f] << " ";
        }
    } else {
    if (c [f] < d[f]){
        cout << c [f] << " ";
    } else {
        cout << d[f] << " ";
    }
    }
}
return 0;
}
