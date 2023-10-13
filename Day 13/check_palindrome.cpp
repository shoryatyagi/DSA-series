#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int num)
{
    int ans = 0, rem;
    int temp = num;

    if (num < 0)
        return 0;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            return 0;
        ans = ans * 10 + rem;
    }
    if (temp == ans)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    if (isPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}