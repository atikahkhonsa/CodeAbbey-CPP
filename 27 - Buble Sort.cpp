#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a], n;
    int c = 0, d = 0;

    for (int i = 0; i < a; i++){
            cin >> b[i];
    }
    for (int i = 0; i < a; i++){
        int x = 0;
        for (int ii = 0; ii < a - 1; ii++){
            if (b[ii] > b[ii + 1]){
                n = b[ii];
                b[ii] = b[ii + 1];
                b[ii + 1] = n;
                c++;
                x++;
            }
        }

      d++;
      if (x == 0) {break;}
    }
    cout << d << " " << c << endl;
    return 0;
}
