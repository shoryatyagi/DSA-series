#include<iostream>
using namespace std;
int main(){
	/*
		if it is raining then
			carry umber
		else then
			carry karstark
		endif

		syntax of "if"

		if(condition){
			task 1
		}
		else {
			task 2
		}

	*/


	// "if" can be standalone
	// but "else if" or "else" cant
	int a = 5;
	cout<<a<<endl;

	if(a <= 10){ // current cond true
		cout<<"if\n";
	}
	else{
		cout<<"else of 1st if\n";
	}
	// 	else if - 	sirf aur sirf tabh chalega 
	//				jab uppar waali cond false hai
	//				aur current waali true hai
	if(a >= 5){
		cout<<"1st else if\n";
	}
	else{
		cout<<"else of 2nd if\n";
	}
	if(a != 3){
		cout<<"2nd else if\n";
	}
	else { // uppar waala saara false
		cout<<"else of last if\n";
	}

	cout<<"end of the line\n";
	return 0;
}