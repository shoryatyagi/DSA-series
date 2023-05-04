//leetcode problem 852

#include<iostream>
using namespace std;

int peak_ele(int arr[] ,int size){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    while(start < end){
        if( arr[mid]< arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;

    }
    return start;
}
int main(){
    int arr[] = {0,1,2,5,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Peak element : "<< arr[peak_ele(arr,size)] << endl;
}