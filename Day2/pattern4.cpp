#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <=3;i++){
        for(int j = 1; j <=i;j++){
            cout<< "*" <<"";
        }
        cout<< "  ";
        for(int k =3;k>=i;k--){
            cout<< "*";
        }
        cout<< "  ";
        for(int l =3; l>=i;l--){
            cout<< "*";
        }
        cout<< "  ";
        for(int m = 1; m <=i;m++){
            cout<< "*" <<"";
        }
        cout<<endl;
    }
}