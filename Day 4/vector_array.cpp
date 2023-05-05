#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout << "Size : "<<v.capacity()<<endl;

    v.push_back(1);
    cout << "Size : "<< v.capacity()<<endl;

    v.push_back(2);
    cout<< "Size : "<< v.capacity()<<endl;

    v.push_back(3);
    cout<< "Size : "<< v.capacity()<<endl;

    cout << "Element at 2nd index : "<< v.at(1)<<endl;
    cout<< "First Element : "<<v.front()<<endl;
    cout << "Last Element : "<<v.back()<<endl;
    
    for(int i:v){
        cout << i << " ";
    }
    v.pop_back();
    cout << endl;
    for (int i:v) cout << i<<" ";

    cout << "size before clear : "<<v.size()<<endl;

    v.clear();
    cout << "size after clear : "<<v.size()<<endl;

}