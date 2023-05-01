#include<iostream>
using namespace std;

int main(){
    int arr[] = {52,4,34,2,4,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=size-2; i++){
        for(int j=0; j<=size-2;j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    for(int k = 0; k < size;k++){
        cout << arr[k] <<" ";
    }cout<<endl;
    }
    
    return 0;
}