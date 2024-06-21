    #include <iostream>
    #include <cmath>

    using namespace std;
    int main () {
        int a;
        cin >> a;

        int b;

        int c;

        double x;

        int hasil;

        for (int i = 0; i < a; i++){
            hasil = 0;
            c = 0;
            do {
                cin >> b;
                hasil = hasil + b;
                c++;
            }
            while (b != 0);
            x = round(hasil / (c - 1));

            cout << x << " ";


        }


    return 0;
    }
