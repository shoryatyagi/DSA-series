#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the key you want to search : ";
    cin>>num;
    int arr[] = {1,2,3,4,5};
    for(int i = 0;i<sizeof(arr);i++){
        if(arr[i]==num){
            cout << "Key found at index : "<< i+1;
            return 0;
        }
    }
}