#include <iostream>
using namespace std;

int first_Occurence(int arr[], int size, int target)
{
    int start = 0, end = size - 1;
    int first = -1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return first;
}
int last_Occurence(int arr[], int size, int target)
{
    int start = 0, end = size - 1;
    int last = -1;

    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return last;
}
int main()
{
    int arr[6] = {1, 2, 3, 3, 4, 5};
    cout << "First Occurence : " << first_Occurence(arr, 6, 3) << endl;
    cout << "Last Occurence : " << last_Occurence(arr, 6, 3) << endl;

    return 0;
}
