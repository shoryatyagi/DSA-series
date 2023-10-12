#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<< "Enter the number to check : ";
    cin>> n;

    int i=2;
    while(i<n){
        if (n==2){
            cout<< "Prime number !";
            return 0;
        }
        else if (n%i==0){
            cout<< "Not Prime number";
            return 0;
        }
        i++;
    }
    cout << "Prime number !"<<endl;
    return 0;
    
}