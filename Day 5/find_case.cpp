#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "Enter character : ";
    cin>>ch;

    if (ch>='A' and ch<='Z'){
        cout<< "Uppercase ";
    }
    else if (ch>='a' and ch<='z'){
        cout<< "Lowercase ";
    }
    else{
        cout<< "Invalid ";
    }
    cout<<(int)'$'<<endl;
	return 0;
}