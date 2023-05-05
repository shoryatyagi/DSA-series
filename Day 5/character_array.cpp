#include<iostream>
#include<cstring>
using namespace std;

int length(char *arr){
    int i = 0;
    while(arr[i]){
        i++;
    }
    return i;
}
int main(){
    char arr[] = "Hello shorya";
    cout << length(arr) << endl;
    cout << strlen(arr) << endl;

    return 0;
}