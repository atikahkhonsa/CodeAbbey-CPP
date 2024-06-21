#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int jumlah, ambil;
    string huruf;

    for (int i = 0; i < a; i++){
        cin >> jumlah >> ambil >> huruf;
        if (huruf == "n"){
            jumlah = jumlah % (ambil + 1);
            cout << jumlah << " ";
        }
        else if (huruf == "i"){
            jumlah = jumlah %(ambil + 1);
            jumlah = jumlah - 1;
            if (jumlah < 0){
                cout << ambil << " ";
            }
            else{
                cout << jumlah << " ";
            }
        }
    }
    return 0;
}
