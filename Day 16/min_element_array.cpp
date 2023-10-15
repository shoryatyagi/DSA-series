#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {22, 45, 67, 18, 6};
    int min = INT_MAX;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Size : " << size << endl;
    cout << "Min : " << min << endl;

    return 0;
}