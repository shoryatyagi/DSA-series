#include <iostream>
using namespace std;

int Total_Moves(int x, int y)
{
    int total = 0;
    total += min(8 - x, 8 - y);
    total += min(8 - x, y - 1);
    total += min(x - 1, y - 1);
    total += min(x - 1, 8 - y);

    return total;
}
int main()
{

    int a, b;
    cout << "Enter th eposition of Bishop(a,b) : ";
    cin >> a >> b;

    cout << "Total moves: " << Total_Moves(a, b) << endl;
}