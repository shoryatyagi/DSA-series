#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character or sentence: ";
    cin>>ch;
    int ch_count = 0;
    while(ch!='$'){
        ch_count++;
        cin>>ch;
    }
    cout << ch_count;
    return 0;
}