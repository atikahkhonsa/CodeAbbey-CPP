#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    string suits[4] = {"Clubs", "Spades", "Diamonds", "Hearts"};
    string ranks[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    int rumus;
    int b[a];

    for (int i = 0; i < a; i++){
        cin >> b[i];
        cout << ranks[b[i]%13] << "-of-" << suits[b[i] / 13] << " ";
    }
    return 0;
}
