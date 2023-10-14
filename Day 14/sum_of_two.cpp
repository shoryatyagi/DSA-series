#include <iostream>
using namespace std;

int Sum(int x, int y)
{
    return x + y;
}

int Multiply(int x, int y)
{
    return x * y;
}

void fun()
{
    cout << "Hello Shorya Tyagi" << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << Sum(a, b) << endl;
    cout << Multiply(a, b) << endl;
    fun();
}
