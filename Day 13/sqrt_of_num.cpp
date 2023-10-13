#include <iostream>
using namespace std;

int find_sqrt(int n)
{
    if (n < 0)
        return 0;

    for (int i = 0; i <= n; i++)
    {
        if (i * i > n)
            return i - 1;
    }
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    cout << find_sqrt(num) << endl;
}