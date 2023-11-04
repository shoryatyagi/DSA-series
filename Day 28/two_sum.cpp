#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int start = 0, end = numbers.size() - 1;
    vector<int> ans;
    while (start < end)
    {
        if (numbers[start] + numbers[end] == target)
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            return ans;
        }
        else
        {
            if (numbers[start] + numbers[end] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> numbers = {2, 7, 9, 10, 11, 15, 27};
    int start = 0, end = 7;
    int target = 42;

    vector<int> ans = twoSum(numbers, target);
    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}