#include <iostream>

using namespace std;

int main(){
    int a;
    cin >>a ;

    int max, min;

    for(int i = 0; i < 300; i++){
        cin >> a;

        if (a > max){
            max = a;
        }
        if(a < min) min{
            min = a;
        }
    }
    cout << max << " " << min;
    return 0;
}