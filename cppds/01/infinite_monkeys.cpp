#include <iostream>
#include <random>
#include <string>

using namespace std;

const int len = 28;
const string sentence = "methinks it is like a weasel";

string generate(int length)
{
    string characters = "abcdefghijklmnopqrstuvwxyz ";
    mt19937 generator{random_device{}()};
    uniform_int_distribution<> dist_letters(0, characters.size() - 1);
    uniform_int_distribution<> fist_sentence(0, len - 1);
    string random_sentence = "";
    for (int i = 0; i < len; i++)
    {
        int random_index = dist_letters(generator);
        random_sentence += characters[random_index];
    }
    return random_sentence;
}

string iterate(string rand_string)
{
    string characters = "abcdefghijklmnopqrstuvwxyz ";
    mt19937 generator{random_device{}()};
    uniform_int_distribution<> dist_string_pos(0, len - 1);
    uniform_int_distribution<> dist_letters(0, characters.size() - 1);
    double score = 0.0;
    double old_score = 0.0;
    string new_string;
    int counter = 0;
    while (score != 1.0)
    {
        new_string = rand_string;

        //get random indices
        int rand_pos = dist_string_pos(generator);
        int rand_letter = dist_letters(generator);

        //calculate score of old string
        for (int i = 0; i < len; i++){
            if (rand_string[i] == sentence[i]) {old_score += 1.0;}
        }
        old_score = old_score/len;

        //randomly change one character 
        new_string[rand_pos] = characters[rand_letter];

        //calculate score of new string
        for (int i = 0; i < len; i++){
            if (new_string[i] == sentence[i]) {score += 1.0;}
        }
        score = score/len;

        //if scored higher, save new string
        if (score > old_score) {rand_string = new_string;}
    
        counter++;
        if (!(counter%100)) {cout << rand_string << endl;}

    }   
    return rand_string;
}

int main()
{
    string output;
    output = generate(len);
    cout << "The initial random string is: " << output << endl;
    output = iterate(output);
    cout << "The final string is: " << output << endl;
    return 0;
}