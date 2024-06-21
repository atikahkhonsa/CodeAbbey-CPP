#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    int a;
    cin >> a;

    int b[a];
    string c[a];

    for (int i = 0; i < a; i++){
        cin >> b[i] >> c[i];
    }

    for (int ii = 0; ii < a; ii++){
        if (b[ii] > 0){
            rotate (c[ii].begin(),c[ii].begin()+b[ii],c[ii].end());
            cout << c[ii] << " ";
        }
        else if (b[ii] < 0){
            reverse (c[ii].begin(), c[ii].end());
            rotate (c[ii].begin(),c[ii].begin()-b[ii],c[ii].end());
            reverse (c[ii].begin(), c[ii].end());
        cout << c[ii] << " ";
        }

    }
    return 0;
}
