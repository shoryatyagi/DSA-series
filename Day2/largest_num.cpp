#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {22,34,56,78};
    int size = sizeof(arr)/sizeof(int);
    int large_num = INT_MIN;

    for(int i = 0; i < size;i++){
        if(arr[i]>large_num){
            large_num = arr[i];
        }
    }
    cout<< "Largest number in the array : "<<large_num<<endl;
}