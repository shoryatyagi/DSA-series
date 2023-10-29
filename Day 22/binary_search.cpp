#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            end = mid - 1;
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 8};
    cout << binary_search(arr, 5, 7);
    return 0;
}