#include<iostream>
using namespace std;

int main(){
    cout<< "Enter the value of n : ";
    int n;
    cin>>n;
    
    int i =2;
    while(i<=n){
        int j =2;
        bool is_prime = true;
        while (j<i)
        {
            if (i%j==0){
                is_prime= false;
            }
            j++; 
        }
        if(is_prime){
            cout<< i<<" ";
        }
        i++;
    }
}