#include <iostream>

using namespace std;

int main () {
    int M, N, b = 0;
    cin >> M >> N;

    int a[M], x, y[N] = {0};
    for(int k=1;k<=N;k++){
        y[k]=0;
    }

    for (int i = 0; i < M; i++){
        cin >> a[i];
            for (int ii = 1; ii <= N; ii++){
                if (a[i] ==ii ){
                    y[ii]++;
                }
            }
    }

    for (int j = 1; j <= N; j++){
        cout << y[j] << " ";
    }
    return 0;
}
