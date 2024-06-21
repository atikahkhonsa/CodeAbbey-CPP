#include <iostream>
#include <cstdio>

using namespace std;


int main () {
    int a;
    cin >> a;

    string x;
    getchar();
    int b[a] = {0}, c[a] = {0}, y[a];

    for (int i = 0; i < a; i++){
        getline (cin, x);
       int y = {x.length ()};

            for (int z = 0; z <y; z+=2){
                if ((x[z] == 'P' && x[z + 1] == 'R') ||
                    (x[z] == 'R' && x[z + 1] == 'S') ||
                    (x[z] == 'S' && x[z + 1] == 'P')){
                    b[i]++;
                }
                else if ((x[z] == 'R' && x[z + 1] == 'P') ||
                    (x[z] == 'S' && x[z + 1] == 'R') ||
                    (x[z] == 'P' && x[z + 1] == 'S')){
                    c[i]++;
                }
                else ((x[z] == 'R' && x[z + 1] == 'R') ||
                      (x[z] == 'S' && x[z + 1] == 'S') ||
                      (x[z] == 'P' && x[z + 1] == 'P'));
                {continue;}

            }
    }

    for (int ii = 0; ii < a; ii++){
        if (b[ii] > c[ii]){
            cout << "1 ";
        }
        else {
            cout << "2 ";
        }
    }

    return 0;
}
