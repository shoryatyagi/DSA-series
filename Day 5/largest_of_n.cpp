#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"How many numbers you want to take : ";
    cin>>n;

    int large_num = INT_MIN;
    
    int input;
    int i =0;
   while( i < n ){
		cin >> input;
		if(large_num < input){
			large_num = input;
		}
		i = i + 1;
	}
    cout<< "Largest Number : " << large_num;
    return 0;
}

