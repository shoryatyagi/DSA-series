#include <iostream>
using namespace std;

int linear_Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[7] = {23, 67, 12, 7, 9, 54, 6};
    cout << linear_Search(arr, 7, 54) << endl;
}