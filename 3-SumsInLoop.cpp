#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a], c[a], sum;

    for(int i = 0; i < a; i++){
        cin >> b[i] >> c[i];
    }

    for (int i = 0; i < a; i++){
        cout << b[i] + c[i] << " ";
    }

    return 0;
}