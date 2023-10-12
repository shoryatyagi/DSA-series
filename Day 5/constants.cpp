#include<iostream>
#define pie 3.14 + 1
using namespace std;
int main(){
	// 10 = 11;
	// const int a; //error
	const int a = 10; // const variables have to be initialized
	// cout<<a<<endl;
	// value of const cannot be changed after its creation
	// cin>>a;
	// a = 50;
	cout<<a<<endl;

	const float pi = 3.14 + 1;
	const float og = 3.14;
	int r = 7;
	cout << og << " " << 2 * r * og << endl; // 57.96
	cout << pi << " " << 2 * r * pi << endl; // 57.96
	cout << pie << " " << 2 * r * pie << endl; // 57.96

	return 0;
}