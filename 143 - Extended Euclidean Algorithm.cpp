#include <iostream>
#include <cmath>

using namespace std;

int fpb (int x, int y){
    while (x != y){
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return y;
}
int main(){
    // q itu HASIL BAGI, kalo r itu HASIL MOD nya
    int n, a, b, FPB, q, r, sn, tn;
    cin >> n;

    for (int i = 0; i < n; i++){
        int sp = 1, sc = 0;
        int tp = 0, tc = 1;
        cin >> a >> b;
        FPB = fpb(a, b);

        q = a / b;
        r = a % b;

        sn = sp - (q * sc);
        tn = tp - (q * tc);

        a = b;
        b = r;

            while (r != 0){
                q = a / b;
                r = a % b;

                a = b;
                b = r;

                sp = sc;
                sc = sn;
                tp = tc;
                tc = tn;

                 sn = sp - (q * sc);
                 tn = tp - (q * tc);
            }
    cout << FPB << " " << sc << " " << tc << " " << endl;
    }
    return 0;
}
