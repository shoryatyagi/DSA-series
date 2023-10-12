#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int fn =1;
    for(int i = 1; i <=n; i++){
        int value = fn;
        for(int j=1; j <=i; j++){
            cout<<value<<" ";
            value = 1-value;
           
        }
        cout<<endl;
        fn=1-fn;
    }
    return 0;
}