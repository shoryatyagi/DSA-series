#include <iostream>
using namespace std;

int trailing_zeroes(int n)
{
    int count = 0;
    while (n > 5)
    {
        count += n / 5;
        n /= 5;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Number of trailing zeroes : " << trailing_zeroes(n) << endl;

    return 0;
}