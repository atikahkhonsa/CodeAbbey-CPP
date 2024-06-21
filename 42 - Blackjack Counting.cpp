#include <iostream>
#include <string>

using namespace std;

int main (){
    int a;
    cin >> a;

    string b[a];
    cin.ignore();

    for (int i = 0; i < a; i++){
        getline (cin, b[i]);
    }
    int jumlah, ubah;
    for (int i = 0; i < a; i++){
        jumlah = 0;
        for (int j = 0; j < b[i].length(); j++){
            if (b[i][j] == ' ' || b[i][j] == 'A'){
                continue;
            }
            if (b[i][j] == 'K' || b[i][j] == 'T' || b[i][j] == 'J' || b[i][j] == 'Q' ){
               jumlah += 10;
            }
            else {
                ubah = b[i][j] - 48;
                jumlah += ubah;
            }
        }
        for (int y = 0; y < b[i].length(); y++){
            if (b[i][y] == 'A'){
                if (jumlah + 11 > 21){
                    jumlah++;
                }
                else {
                    jumlah += 11;
                }
            }
        }
        if (jumlah > 21){
            cout << "Bust" << " ";
        }
        else {
            cout << jumlah << " ";
        }
    }
    return 0;
}
