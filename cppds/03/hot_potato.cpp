#include <iostream>
#include <string>
#include <queue>

using namespace std;

string hot_potato(string names[], int n)
{
    //adds name to queue
    queue<string> circle;
    int array_size = names->length();
    for (int i = 0; i < array_size; i++)
    {
        circle.push(names[i]);
    }

    int counter = 0;
    while (circle.size() > 1)
    {
        string person = circle.front();
        circle.pop();
        if (counter % n)
        {
            circle.push(person);
        }
    }
    return circle.front();
}

int main()
{
    string s[] = {"Bill", "David", "Susan", "Kent", "Jane", "Brad"};
    cout << hot_potato(s, 7) << endl;
    return 0;
}