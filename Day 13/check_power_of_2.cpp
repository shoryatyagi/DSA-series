#include <iostream>
using namespace std;

bool isPowerOfTwo(int num)
{
    if (num < 1)
        return 0;

    while (num != 1)
    {
        if (num % 2 == 1)
            return 0;
        num = num / 2;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter  the number : ";
    cin >> num;

    (isPowerOfTwo(num)) ? cout << "Present in power of 2" : cout << "Not present in power of 2";

    return 0;
}