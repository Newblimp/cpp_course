#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    cout << max << endl;
    if (a > max)
    {
        max = a;
    }
    cout << max << endl;
    if (b > max)
    {
        max = b;
    }
    cout << max << endl;
    if (c > max)
    {
        max = c;
    }
    cout << max << endl;
    if (d > max)
    {
        max = c;
    }
    cout << max << endl;
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}