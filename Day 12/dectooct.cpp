#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the decimal number : ";
    cin >> n;

    int ans = 0, multi = 1;

    while (n)
    {
        int rem = n % 8;
        ans += rem * multi;
        n /= 8;
        multi *= 10;
    }
    cout << "Octal number : " << ans << endl;
}