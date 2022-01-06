//   Convert this program to C++
//   change to C++ io
//   change to one line comments
//   change defines of constants to const
//   change array to vector<>
//   inline any short function

#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 40;

//sums all elements in vector data into variable accum
inline void sum(int &accum, int size, vector<int> data)
{
    accum = 0;
    for (int i = 0; i < size; i++)
        accum += data[i];
}

int main()
{
    int accum = 0;
    vector<int> data;
    for (int i = 0; i < SIZE; i++)
        data.push_back(i); //push_back() adds i to the end of the vector
    sum(accum, SIZE, data);
    cout << "The -gsum is " << accum << endl;
    return 0;
}
