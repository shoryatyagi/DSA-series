#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<< "Finding 6 : "<<binary_search(v.begin(), v.end(),7)<<endl;
    cout << "Lower Bound : "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    cout << "Upper Bound : "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

    int a =2, b=3;
    cout << "Max : "<<max(a,b)<<endl;
    cout << "Min : "<<min(a,b)<<endl;

    swap(a,b);
    cout << "After swapping : "<<endl;
    cout << "a :"<<a<<endl;
    cout << "b :"<<b<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout << s << endl;
}