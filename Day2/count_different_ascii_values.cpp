#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character or sentence : ";
    cin.get(ch);
    int dig=0 ,alp=0,spc=0,ws=0;

    while(ch!='$'){
        if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')) alp++ ;
        else if(ch>='0' and ch<=9) dig++ ;
        else if(ch ==' ' or ch== '\n' or ch=='\t') ws++ ;
        else spc++ ;
        cin.get(ch);
    }
    cout << "Number of Digits : " << dig<<endl;
    cout << "Number of Alphabets : " << alp<<endl;
    cout << "Number of Special Character" << spc<<endl;
    cout << "Number of Whitespace : " << ws<<endl;
    return 0;

}