#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, belakang,x;
    cin >> a>>belakang;
cin.ignore();
    string sekarang;

    for (int i = 0; i < a; i++){
        getline(cin,sekarang);
        x=sekarang.length();
for(int j=0;j<x;j++){
        if(sekarang[j]==' '){cout<<" ";}
       else if(j==x-1){cout<<".";}
    else if(sekarang[j]-belakang<65){
        cout<<char(91-(65-(sekarang[j]-belakang)));
    }
else {cout<<char(sekarang[j]-belakang);}
    }
    cout<<" ";
    }

    return 0;
}
