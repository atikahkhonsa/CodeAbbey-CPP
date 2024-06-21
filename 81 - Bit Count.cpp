#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    int y;
    while (a--){
        bitset <32> input;

        cin >> y;
        input = y;

        cout << input.count() << " ";
    }
    return 0;
}
