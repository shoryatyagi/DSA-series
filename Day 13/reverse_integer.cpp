#include <iostream>
#include <climits>
using namespace std;

int reverse(int num)
{
    int ans = 0, rem;

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            return 0;
        ans = ans * 10 + rem;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the integer : ";
    cin >> num;
    int reverse_int = reverse(num);
    if (reverse_int)
        cout << reverse_int;
    else
        cout << "Not Possible";
}
