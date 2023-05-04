#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
    int mid = start +(end-start)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1 ;
        }
        mid = start +(end-start)/2  ;
    }
    return -1;
}

int main(){
    int even[] = {4,5,6,9,13,14,23,45,64,72};
    int odd[] = {2,3,4,5,6};

    int even_index = binarySearch(even,10,18);
    cout << "Index of 18 is "<< even_index << endl;

    int odd_index = binarySearch(odd,5,3);
    cout << "Index of 3 is "<< odd_index << endl;
    
}