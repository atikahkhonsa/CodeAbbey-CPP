#include <iostream>
#include <cmath>

using namespace std;

double note(string input){
    int x;
    double hit;
    x = input.length();

    if (input[0] == 'C'){
        hit = (55 * pow(0.5, 0.75));
    }

    if (input[0] == 'C' && input[1] == '#'){
        hit = (55 * pow(0.5, 0.6666666667));
    }

    if (input[0] == 'D'){
        hit = (55 * pow(0.5, 0.5833333333));
    }

    if (input[0] == 'D' && input[1] == '#'){
        hit = (55 * pow(0.5, 0.5));
    }

    if (input[0] == 'E'){
        hit = (55 * pow(0.5, 0.4166666667));
    }

    if (input[0] == 'F'){
        hit = (55 * pow(0.5, 0.3333333333));
    }

    if (input[0] == 'F' && input[1] == '#'){
        hit = (55 * pow(0.5, 0.25));
    }

    if (input[0] == 'G'){
        hit = (55 * pow(0.5, 0.1666666667));
    }

    if (input[0] == 'G' && input[1] == '#'){
        hit = (55 * pow(0.5, 0.0833333333));
    }

    if (input[0] == 'A'){
        hit = (55 * pow(0.5, 0));
    }

    if (input[0] == 'A' && input[1] == '#'){
        hit = (55 * pow(2, 0.0833333333));
    }

    if (input[0] == 'B'){
        hit = (55 * pow(2, 0.1666666667));
    }

    if (input[x - 1] == '1'){
        hit = hit * 1;
    }

    if (input[x - 1] == '2'){
        hit = hit * 2;
    }

    if (input[x - 1] == '3'){
        hit = hit * 4;
    }

    if (input[x - 1] == '4'){
        hit = hit * 8;
    }

    if (input[x - 1] == '5'){
        hit = hit * 16;
    }

    return hit;
}

int main(){
    int a;
    cin >> a;

    double b;
    string signnote;

    for (int i = 0; i < a; i++){
        cin >> signnote;
        b = note(signnote);
        cout << round(b) << " ";
    }
    return 0;
}
