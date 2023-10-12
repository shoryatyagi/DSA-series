#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5;i++){
        char ch = 'A';
        for(int j =5; j>=i; j--){
            cout<< ch<<" ";
            ch++;
        }
        ch--;
        for(int j =5; j>=i;j--){    
            cout<< ch<<" ";
            ch--;
        }        
        cout<<endl;
    }
}