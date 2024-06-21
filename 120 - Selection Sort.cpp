#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;

    //p = point dimana maks nya berada
    int arr[a], maks,p, tampungp[a], c=0;

    for (int i = 1; i <= a; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= a; i++){
            maks = 0;
        for (int ii = 1; ii <= a - c; ii++){
            if(maks < arr[ii]){maks = arr[ii];p = ii;}
        }
        swap(arr[p], arr[a - c]);
        tampungp[i] = p;
        c++;
    }

    for (int i = 1; i <= a-1; i++){
        cout << tampungp[i]-1 << " ";
    }

    return 0;
}
