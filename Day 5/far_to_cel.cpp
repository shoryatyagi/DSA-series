#include<iostream>
using namespace std;
int main(){
	int init, fval, step;
	cin>>init>>fval>>step;
	int curr = init;
	cout<<"far\tcel\n";
	while(curr <= fval){
		float cel = (5.0/9)*(curr-32); // 9 implicit typecasting
		cout<<curr<<"\t"<<(int)cel<<endl; // cel explicit typecasting
		curr = curr + step;
	}
	return 0;
}