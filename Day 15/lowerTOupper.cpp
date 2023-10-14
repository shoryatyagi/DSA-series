#include <iostream>
using namespace std;

void ToUpper(char &ch)
{
    ch = ch - 32;
}

int main()
{
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;
    ToUpper(ch);
    cout << "After Conversion : " << ch << endl;

    return 0;
}