#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1, 9, -8, 5, -4, 8, 7, -3, -4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i = 0; i < size;i++){
        for(int j = i; j < size;j++){
            int Count = 0;
            for(int k = i; k<=j;k++){
                Count += arr[k];
                if (Count > max){
                    max = Count ;
                }
            }
        }
    }
    cout << max << endl;

}