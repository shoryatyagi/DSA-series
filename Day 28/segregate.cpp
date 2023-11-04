#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {0, 0, 1, 0, 0, 1, 1, 0};

    int start = 0, end = 7;

    while (start < end)
    {
        if (arr[start] == 0)
            start++;
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }

    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
    return 0;
}