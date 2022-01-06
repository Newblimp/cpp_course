#include <iostream>

using namespace std;

int main(){
    int myArray[] = {1, 2, 4, 8, 9};
    for (int i = 0; i<8; i++){
        cout << myArray[i] << "\t";
        cout << &myArray[i] << endl;
    }
    cout << endl;
    return 0;
}