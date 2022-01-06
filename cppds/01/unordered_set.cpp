#include <iostream>
#include <unordered_set>

using namespace std;

void checker(unordered_set<char> set, char letter){
    if (set.find(letter) == set.end()){
        cout << "The letter is not present" << endl;
    } 
    else {
        cout << "The letter is present in the set!" << endl;
    }
}

int main(){
    unordered_set<char> setchar = {'a', 'b', 'c', 'd'};

    char letter = 'e';
    checker(setchar, letter);
    setchar.insert('e');
    checker(setchar, letter);
    return 0;
}