#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int fact(int x)
{
    if (x == 0)
        return 1;
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    (isPrime(n)) ? cout << "Prime Number\n" : cout << "Not Prime Number\n";
    cout << fact(n) << endl;
    return 0;
}