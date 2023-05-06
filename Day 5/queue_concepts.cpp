#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Shorya");
    q.push("Tyagi");
    q.push("Tony");

    cout<< "First element : "<< q.front() << endl;
    q.pop();

    cout<< "Second element : "<< q.front() << endl;
    cout<< "SIze : "<<q.size()<< endl;

}