#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


int main(){
    int a;
    cin >> a;


    int tampung[a];
    int c;
    string kata, tampungp ;

    for (int i = 0; i < a; i++){
            ifstream p;
             p.open("ana.txt");
            c=0;
        cin >> kata;
        sort (kata.begin(), kata.end());
        // ! = belum, eof = end of file
        while ( ! p.eof()){
            p >> tampungp;
            sort (tampungp.begin(), tampungp.end());
            if (tampungp == kata){
                c++;
            }
        }
        tampung[i]=c-1;

    }
    for(int j=0;j<a;j++){
        cout<<tampung[j]<<" ";
    }
return 0;
}
