#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Enter the number : ";
    cin>>num;
    int set_bits = 0;

    while(num!=0){
        int i = num&1;
        if(i) set_bits++;
        num =num>>1;
    }
    cout<<"Number os set bits : "<<set_bits;
}
