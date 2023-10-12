#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int result=0 ;
    while(num!=0){
        int reminder = num%10;
        result = result*10 + reminder;
        num=num/10;

    }
    cout<< "After reversing : "<<result;
    return 0;
}