#include <iostream>
#include <ctime>
using namespace std;

//Performs same function as listing one, and also list the time it takes to perform
//the function

int sumofN2(int n)
{
    clock_t begin = clock();
    long int theSum = 0;
    theSum = (n*(n+1))/2;
    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    cout << fixed << endl;
    cout << "Sum is " << theSum << " required " << elapsed_secs << " seconds" << endl;
    return theSum;
}

int main()
{
    int how_many_times;
    cout << "How many digits to sum?" << endl;
    cin >> how_many_times;
    for (int i = 0; i < 3; i++)
    {
        sumofN2(how_many_times);
    }
    return 0;
}
