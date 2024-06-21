#include <iostream>

using namespace std;

int main(){
    int a[52];

    string b[] = {"CA", "C2","C3", "C4", "C5", "C6", "C7", "C8", "C9","CT", "CJ", "CQ", "CK", "DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK", "HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK", "SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK"};
    string s;
    for (int i = 0; i < 52; i++){
        cin >> a[i];
    }
    for (int ii = 0; ii < 52; ii++){
        if (a[ii] > 51){a[ii] %= 52;}
        s = b[ii];
        b[ii] = b[a[ii]];
        b[a[ii]] = s;
    }
    for (int y = 0; y < 52; y++){
        cout << b[y] << " ";
    }
    return 0;
}
