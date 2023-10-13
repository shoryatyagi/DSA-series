#include <iostream>
using namespace std;

int find_complement(int x)
{
    if (x == 0)
        return 1;
    int ans = 0, rem, multi = 1;
    while (x != 0)
    {
        rem = x % 2;
        rem = rem ^ 1;
        x = x >> 1;
        ans = ans + rem * multi;
        multi = multi * 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    cout << find_complement(num) << endl;
}