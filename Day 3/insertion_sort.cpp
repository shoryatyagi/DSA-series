#include<iostream>
using namespace std;

int main(){
    int arr[] = {8,9,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j=i-1;
           for(; j>=0;j--){
            if (arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }

           }
           arr[j+1] = temp;
    }
    for(int k=0; k<size; k++){
        cout<< arr[k]<<" ";
    }
}