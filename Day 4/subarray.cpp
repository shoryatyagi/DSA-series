#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 9, -8, 5, -4, 8, 7, -3, -4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i <size;i++){
        for (int j = i; j < size; j++){
            cout<< "{" ;
            for(int k =i; k<=j; k++){
                cout << arr[k] << " ";
            }
            cout << "}";
            cout << "   ";
        }
        cout << endl << endl;
    }
    cout << " { } "<< endl;
}