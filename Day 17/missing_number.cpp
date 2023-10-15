#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    int ans = n * (n + 1) / 2;
    return ans - sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 5};
    cout << missingNumber(arr, 5) << endl;

    return 0;
}