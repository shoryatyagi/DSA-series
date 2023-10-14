#include <iostream>
using namespace std;

// Pass by reference

void swap(int &x, int &y)
{
    int c = x;
    x = y;
    y = c;
}

void swap(float &x, float &y)
{
    float c = x;
    x = y;
    y = c;
}
int main()
{
    float a, b;
    cin >> a >> b;
    swap(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << endl;
    float f1 = 3.2, f2 = 5.6;
    swap(f1, f2);
    cout << "a:" << f1 << endl;
    cout << "b:" << f2 << endl;
}