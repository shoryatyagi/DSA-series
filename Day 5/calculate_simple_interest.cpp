#include<iostream>
using namespace std;

int main(){
    int p,r,t;

    cout<<"Enter Principle : ";
    cin>> p;
    cout<<endl;

    cout<<"Enter Rate : ";
    cin>> r;
    cout<<endl;

    cout<<"Enter Time Period : ";
    cin>> t;
    cout<<endl;

    int result = (p*r*t)/100;
    cout<< "Simple Interest : "<<result;

    return 0;

}