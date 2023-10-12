#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 10; row++)
    {
        int num = row;
        for (int col = 1; col <= row; col++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}