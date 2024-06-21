#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a;
    cin>>a;
    int b,c,d;

    for (int i=0;i<a;i++){
        cin>>b>>c>>d;
        if (b + c > d && b + d > c && c + d > b) {cout<<"1"<<" ";}
        else {cout<<"0"<<" ";}
    }

    return 0;
}
