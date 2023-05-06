#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[1] = "shorya";
    m[2] = "tyagi";
    m[13] = "iron-man";

    m.insert({5,"steve"});

    cout<< "Before erase : "<<endl;
    for(auto s : m){ //in sorted order
        cout<< s.first << " "<<s.second<< endl;
    }
    cout<< "finding 13 : "<< m.count(13)<<endl;
    cout<< "Before erase : "<<endl;
    //m.erase(13);
    for(auto s : m){ //in sorted order
        cout<< s.first << " "<<s.second<< endl;
    }
    cout<<endl;
    auto it = m.find(5);
    for(auto i =it; i!=m.end();i++){
        cout<<(*i).first << endl;
    }

    return 0;
}