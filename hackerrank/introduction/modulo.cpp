#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int a, b;
    scanf("%d\n%d",&a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i < 10)
        {
            cout << numbers[i] << endl;
        }
        else if (i % 2) 
        {
            cout << numbers [10] << endl;
        }
        else
        {
            cout << numbers [9] << endl;
        }
    }
    return 0;
}
