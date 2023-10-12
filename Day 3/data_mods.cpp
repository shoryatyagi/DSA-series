
#include <iostream>

using namespace std;

int main(){

	// cout << 166;
	// cout<<endl; // end line
	// cout<<'\n'; // new line character
	// cout<<'\n'; // new line character
	// cout<<'\n'; // new line character
	// cout<<"800\n"; 

	cout << 166 << endl << "188" << endl;
	
	// syntax
	// datatype identifier;
	int score_out_of_100;
	score_out_of_100 = 18;
	cout << score_out_of_100 << endl;

	char ch;
	ch = 'a';
	cout<<ch<<endl;

	float high;
	high = 1.11111111111; // 8  - power | 23 + 1 - magnitude
	cout<<high<<endl;

	unsigned int pos;
	pos = -1; 
	cout<<pos<<endl;

	int hel;
	hel = -1;
	cout<<hel<<endl;

	short int k; // int - 4 bytes | short int - 2 bytes
	k = 2000;
	cout<<k<<endl;

	long int t; // long int - 4 bytes at least, upto 8 bytes
	t = 400000000000000000;
	cout<<t<<endl;

	long long int x; // long long int - 8 bytes at least
	x = 400000000000000000;
	cout<<x<<endl;

	cout<<sizeof(x)<<endl;
	
	float ft;
	ft = 3.14;
	cout<<sizeof(ft)<<endl;

	
	return 0; 
}