#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int a;
    cin >> a;
    cin.ignore();

    string x;
    int z, w, taruh[a], hasil, tampung;

    for (int i = 0; i < a; i++){
        getline (cin, x);
        stringstream length(x);
        hasil = 0;
        while (! length.eof()){
        length >> tampung;
        hasil += tampung * tampung;
        }

        cout << hasil << " ";
    }



return 0;
}
