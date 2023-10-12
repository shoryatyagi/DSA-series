#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	int largest = INT_MIN;
	int input;
	while( i <= n ){
		cin >> input;
		if(largest < input){
			largest = input;
		}
		i = i + 1;
	}
	cout<<largest<<endl;
	return 0;
}