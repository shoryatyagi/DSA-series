#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int line_number = 1;
	int token = 1;
	while(line_number <= n){
		int token_number = 1;
		while(token_number <= line_number){
			cout << token << "\t";
			token = token + 1;
			token_number = token_number + 1;
		}
		cout<<endl;
		line_number = line_number + 1;
	}	
	return 0;
}