#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i: l) cout << i << " ";
    l.erase(l.begin());
    cout<<endl;
    cout<< "After erase :"<<endl;
    for(int i:l) cout << i << " ";
    cout<<endl;
    cout<<"Size of list : "<<l.size()<<endl;
}