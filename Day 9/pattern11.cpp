#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= 5 - row; space++)
        {
            cout << "  ";
        }
        for (int num1 = 1; num1 <= row; num1++)
        {
            cout << num1 << " ";
        }
        for (int num2 = 1; num2 <= row - 1; num2++)
        {
            cout << row - num2 << " ";
        }
        cout << endl;
    }
}