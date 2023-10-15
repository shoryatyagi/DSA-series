#include <iostream>
using namespace std;

void reverse_array(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        swap(arr[i], arr[size]);
        i++;
        size--;
    }
    return;
}
int main()
{
    int arr[5] = {3, 4, 7, 8, 9};
    reverse_array(arr, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}