#include <iostream>
#include <stack>
#include <string>

using namespace std;

string base_change(int n, int base)
{
    stack<int> converted;
    string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    while (n > 0)
    {
        int rem = n % base;
        converted.push(rem);
        n = n / base;
    }

    string new_string = "";
    while (!converted.empty())
    {
        new_string.append(digits[converted.top()]);
        converted.pop();
    }

    return new_string;
}

int main()
{
    int number;
    int base;
    cout << "Number to convert:" << endl;
    cin >> number;
    cout << "Base to convert to:" << endl;
    cin >> base;
    cout << base_change(number, base) << endl;

    return 0;
}