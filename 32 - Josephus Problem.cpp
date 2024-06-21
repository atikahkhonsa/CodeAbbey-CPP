#include <iostream>
#include <cmath>

using namespace std;

int f (int n, int k){
    if (n == 1){
        return 1;
    }
    else {
        return ((f(n - 1, k) + k - 1) % n) + 1;
    }
}
int main (){
    int n, k;
    cin >> n >> k;
    cout << f(n,k)<< " ";
     return 0;
}
