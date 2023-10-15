#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
void rotate_Array(int arr[], int n)
{
    int temp = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    return;
}
int main()
{
    int arr[5] = {3, 4, 7, 8, 9};
    rotate_Array(arr, 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}