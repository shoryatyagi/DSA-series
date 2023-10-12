#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number : ";
    cin>>n;

    int i = 0;
    while((i+1)*(i+1)<=n){
        i++;
    }
    cout<<i<<endl;
    //? using library -->
	cout<<sqrt(n)<<endl;
	return 0;
}