#include <iostream>
using namespace std;

template <class T>
T sum(const T data[], const int size, T s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s += data[i];
    }
    return s;
}

template <class T>
T subtract(const T data[], const int size, T s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s -= data[i];
    }
    return s;
}

template <class T>
void print_out(const T data[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl;
}

int main()
{
    cout << "template for sum" << endl;
    int a[] = {1, 2, 3};
    double b[] = {2.1, 2.2, 2.3};
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;

    cout << "template for subtract" << endl;
    cout << subtract(a,3) << endl;
    cout << subtract(b,3) << endl;

    cout << "template for print_out" << endl;
    print_out(a,3);
    print_out(b,3);

    return 0;
}