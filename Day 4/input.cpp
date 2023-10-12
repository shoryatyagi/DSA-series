#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;

	int n;
	cin >> n;
	while(n > 0){
		cout<<n<<" ";
		n = n - 1;
	}
	cout<<endl;
	return 0;
}