#include<iostream>
using namespace std;
int main(){
	// int c, d, e, f;
	// int a = 10, b = 5;
	// int k, x = 5, y;
	// int p,
	// q,
	// r,
	// s;
	int a = 10, b = 5;
	if(a > 100 and b > 0){ // "and" can be used instead of "&&"
		cout<<"if\n";
	}
	else if(a > 100 or b > 0){ // "or" can be used instead of "||"
		cout<<"else if\n";
	}
	else{
		cout<<"else\n";
	}
	if(not(a > 10)){ // "not" can be used instead of "!"
		cout<<"last if us\n";
	}
	else{
		cout<<"last else\n";
	}

	// bool - 1 byte - 	127 comb - true - non zero
	// 					1 comb - false  - zero
	int c = 10;
	if(c == 5){
		cout<<"TRUE\n";
	}
	else{
		cout<<"FALSE\n";
	}
	cout << "c: " << c<<endl;
	return 0;
}