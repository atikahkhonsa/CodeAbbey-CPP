#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;

    string k, q;
    char b[a];
    for (int i = 0; i < a; i++){
        cin >> k >> q;
        if(k[0] == q[0] || k[1] == q[1]){
            cout << "Y ";
        }
        else if (abs(k[0] - q[0]) == (abs (k[1] - q[1]))){
            cout << "Y ";
        }
        else {
            cout << "N ";
        }
    }
    return 0;
}
