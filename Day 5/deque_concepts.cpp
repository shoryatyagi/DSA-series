#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i: d) cout << i << " ";
    cout << endl;

    //d.pop_front();
    for(int i: d) cout << i << " ";
    cout<< endl;

    cout << "Element at first index : "<<d.at(0) << endl;
    cout << "Empty or not" << d.empty() << endl;

    cout << "Before erase : "<<d.size() << endl;
    d.erase(d.begin(), d.end());
    cout << "After erase : " << d.size() << endl;
}