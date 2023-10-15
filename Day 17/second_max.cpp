#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
int second_largest(int arr[], int n)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }
    int second = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans)
            second = max(arr[i], second);
    }
    return second;
}
int main()
{
    int arr[5] = {3, 4, 7, 8, 9};
    cout << second_largest(arr, 5) << endl;
}