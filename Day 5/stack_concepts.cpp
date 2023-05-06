#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <string> s;
    s.push("Shorya");
    s.push("Aayush");
    s.push("Dev");


    cout<< "Top Element : "<<s.top()<<endl;

    s.pop();
    cout<< "Top Element : "<<s.top()<<endl;
    cout<< "Size : "<<s.size()<<endl;
    cout<< "Empty or not : "s.empty()<<endl;

}