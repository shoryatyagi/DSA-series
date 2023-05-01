#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,2,1,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans;
    for(int i = 0; i < size;i++){
        bool unique_found = true;
        for(int j = 0; j < size;j++){
            if(i!=j and arr[j]==arr[i]){
                unique_found = false;
                break;
            }
        }
        if(unique_found){
            ans = arr[i];
        }
    }
    cout<<ans<<endl;

    // using xor operator
    int ans2 = 0;
    for(int i = 0;i<size;i++){
        ans2^=arr[i];
    }
   cout<< ans2<<endl;
   return 0;
}
