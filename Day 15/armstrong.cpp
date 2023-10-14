#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int x)
{
    int digit = 0;
    int temp1 = x, temp2 = x, sum = 0;

    while (temp1)
    {
        digit++;
        temp1 = temp1 / 10;
    }
    while (temp2)
    {
        int rem = temp2 % 10;
        temp2 /= 10;
        sum = sum + pow(rem, digit);
    }

    if (sum == x)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    (isArmstrong(n)) ? cout << "Armstrong !\n" : cout << "Not Armstrong !\n";

    return 0;
}