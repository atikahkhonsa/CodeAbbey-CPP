#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a], c[a], n[a];

    for(int i = 0; i < a; i++){
        cin >> b[i] >> c[i];
    }

    for(int ii = 0; ii < a; ii++){
        if(b[ii] > c[ii]){
            n[ii] = c[ii];
        }

        else{
            n[ii] = b[ii];
        }
    cout << n[ii] << " ";
    }
    
    return 0;
}