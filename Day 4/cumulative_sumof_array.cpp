#include<iostream>
#include<climits>
using namespace std;

int main(){
     int arr[] = {1, 9, -8, 5, -4, 8, 7, -3, -4, 2};
     int size = sizeof(arr)/sizeof(arr[0]);
     int cum_sum[100] ;
     int max_sum = INT_MIN;
     cum_sum[0] = arr[0];
     for(int i = 0; i < size;i++){
        cum_sum[i] = cum_sum[i-1] + arr[i];
        cout << cum_sum[i]<<" ";
     }


     for(int i = 1; i < size;i++){
        for(int j = i; j <size;j++){
            int current_sum = cum_sum[j]-cum_sum[i-1];
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
        }

     }
     cout << endl;
     cout << max_sum << endl;
}