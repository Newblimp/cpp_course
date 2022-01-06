#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string,string> spnumbers = {{"one", "uno"}, {"two", "due"}};

    spnumbers["three"] = "tre";
    spnumbers["four"] = "quattro";

    for (auto i = spnumbers.begin(); i!=spnumbers.end();i++){
        cout << i->first << " : " << i->second << endl;
    }
    return 0;
}