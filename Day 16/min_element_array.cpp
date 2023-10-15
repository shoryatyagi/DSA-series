#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {22, 45, 67, 18, 6};
    int min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Min : " << min << endl;

    return 0;
}