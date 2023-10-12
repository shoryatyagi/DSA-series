#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    cout << n << endl;

    {
        int n = 30;
        cout << n << endl;
    }

    int i = 20;
    for (; i <= 30; i++)
    {
        cout << i << " ";
    }
}