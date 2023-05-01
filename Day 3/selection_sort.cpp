#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,102,3,8,92,1,22,32,45};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size-1;i++){
        for(int j = i+1; j < size;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int k =0;k<size;k++){
        cout << arr[k] << " ";
    }
}