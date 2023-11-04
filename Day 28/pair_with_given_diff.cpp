#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &A, int n1, int B)
{
    int start = 0, end = 1;

    if (B < 0)
        B = B * -1;
    while (end < n1)
    {
        if (A[end] - A[start] == B)
            return 1;
        else if (A[end] - A[start] < B)
            end++;
        else
            start++;
        if (start == end)
            end++;
    }
    return 0;
}

int main()
{
    vector<int> numbers = {2, 7, 9, 10, 11, 15, 27};
    int start = 0, end = 7;
    cout << solve(numbers, 7, numbers.size());
}