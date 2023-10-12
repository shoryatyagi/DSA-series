#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	// if(ch >= 65 and ch <= 90){
	// 	cout<<"Uppercase\n";
	// }else if(ch >= 97 and ch <= 122){
	// 	cout<<"Lowercase\n";
	// }else{
	// 	cout<<"Invalid\n";
	// }
	if(ch >= 'A' && ch <= 'Z'){
		cout<<"Uppercase\n";
	}else if(ch >= 'a' and ch <= 'z'){
		cout<<"Lowercase\n";
	}else{
		cout<<"Invalid\n";
	}
	cout<<(int)'$'<<endl;
	return 0;
}