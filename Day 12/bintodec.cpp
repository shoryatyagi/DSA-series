#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cout << "Enter the binary number : ";
    cin >> n;

    int ans = 0, multi = 1;

    while (n)
    {
        int rem = n % 10;
        ans += rem * multi;
        multi *= 2;
        n = n / 10;
    }
    cout << "Decimal number : " << ans << endl;
}