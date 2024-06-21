#include <iostream>

using namespace std;

int main(){
    int x = 0, a = 0;
    int arr[1000];
    while (x != -1){
        cin >> x;
        arr[a] = x;
        a++;
    }
    int n; long int d = 0;
    int c = 0;

    for (int ii = 0; ii < a - 2; ii++){
        if (arr[ii] > arr[ii + 1]){
                n = arr[ii];
                arr[ii] = arr[ii + 1];
                arr[ii + 1] = n;
                c++;
            }
    }
    for (int i = 0; i < a - 1; i++){
        d = ((d + arr[i]) * 113) % 10000007;
    }
    for (int y = 0; y < 1; y++){
    cout << c << " " << d << endl;
    }
    return 0;
}
