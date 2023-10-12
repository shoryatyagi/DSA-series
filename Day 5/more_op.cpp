#include<iostream>
using namespace std;
int main(){
	int a = 1, n = 10;
	while(a <= n){
		cout<<a<<" ";
		// a = a + 2;
		a += 1;
	}
	cout<<endl;
	// a operator= value;
	// a = a operator value;

	cout<<"\n\n";

	a = 10;
	// a++;
	// cout<<a<<endl;
	// a++;
	// cout<<a<<endl;
	// a++;
	// cout<<a<<endl;
	a--;
	cout<<a<<endl;
	a--;
	cout<<a<<endl;
	a--;
	cout<<a<<endl;

	// a++ => a += 1 => a = a + 1;
	a++;

	cout<<"\n\n";

	a = 0;
	cout << a++ << endl; // 1 
	cout << a << endl; 
	cout << a << endl; 

	cout<<endl;

	cout << a++ + 3 << " " << a++ << endl; // post increment 
	cout << a << endl; 
	cout << a << endl;

	cout<<"\n\n";
	
	a = 0;
	cout << ++a + 2 << endl; // pre increment
	cout << a << endl;
	return 0;
}