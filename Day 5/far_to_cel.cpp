#include<iostream>
using namespace std;

int main(){
    float temp;
    cout<< "Enter the temperature in fahrenheit : ";
    cin>> temp;

    float celsius = (5.0/9)*(temp-32.0);
    cout << "In celsius : " << celsius;
}