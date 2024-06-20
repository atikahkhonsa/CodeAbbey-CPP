#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int inp;
    int a;
    cin >> inp;

    long double p, n[inp], k[inp];
    for(int j = 0; j < inp; j++){
        cin >> n[j] >> k[j];
    }
    for(int c = 0; c < inp; c++){
        if(n[c] >= k[c]){
            a = n[c] - k[c];
            long double q = 1;

            for(int i = a; i >= 1; i--){
                q = q * i;
            }

            long double b = 1;
            for (int i = n[c]; i >= 1; i--){
                b = b * i;
            }

            long double z = 1;
            for(int i = k[c]; i >= 1; i--){
                z = z * i;
            }

            p = b/(z * q);

            cout << p << " ";

        }
    }

    else{
        cout << "tidak terdefinisi";
    }
    
    return 0;
}