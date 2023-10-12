#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    long long int ans = 0, multi = 1;

    while (n > 0)
    {
        int rem = (n & 1);
        ans += rem * multi;
        multi *= 10;
        n = n >> 1;
    }
    cout << "Binary Number : " << ans << endl;
    return 0;
}