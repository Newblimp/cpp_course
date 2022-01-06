#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<int> intVector;
    intVector.reserve(10);
    for (int i = 0; i < 10; i++){
        intVector.push_back(i);
    }
    for (int i = 0; i <= 10; i++){
        cout << "intVector[" << i<< "] = " << intVector[i] << endl;
    }
    cout << endl;
}