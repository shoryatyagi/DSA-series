#include<iostream>
using namespace std;

int main(){
    int arr[] = {52,4,34,2,4,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<size; i++){
        bool swapped = false;
        for(int j=0; j<size-i;j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped==false){
            break;
        }

    for(int k = 0; k < size;k++){
        cout << arr[k] <<" ";
    }cout<<endl;
    }
    
    return 0;
}