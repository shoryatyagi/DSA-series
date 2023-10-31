#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // create vector
    vector<int> v;
    vector<int> v1(5, 1);
    // size andf capacity
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v[1] = 5;

    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    v1.push_back(8);

    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    cout << "Size of v3: " << v3.size() << endl;
    cout << "Capacity: " << v3.capacity() << endl;

    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.pop_back();
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity: " << vnew.capacity() << endl;

    vnew.erase(vnew.begin() + 1);
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity: " << vnew.capacity() << endl;

    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";
    vnew.insert(vnew.begin() + 1, 50); // insert a value
    cout << "\n";
    vnew[1] = 37;
    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";

    vnew.clear(); // remove all the element
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity: " << vnew.capacity() << endl;

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);

    cout << arr[0] << endl;
    cout << arr.front() << endl;

    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    vector<int> a;
    a = arr;

    for (auto it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    cout << endl;
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    cout << "Size of ans: " << ans.size() << endl;
    cout << "Capacity: " << ans.capacity() << endl;

    // sort in increasing order
    sort(ans.begin(), ans.end());
    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << " ";
    cout << endl;
    // sort in decreasing order sort(rbegin(),rend());
    // sort(ans.begin(), ans.end(), greater<int>());
    /*
    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << " ";
    cout << endl;
    */

    cout << binary_search(ans.begin(), ans.end(), 235) << endl;
    cout << find(ans.begin(), ans.end(), 235) - ans.begin() << endl;
    return 0;
}