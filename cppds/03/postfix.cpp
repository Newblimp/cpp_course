#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

string infix_to_postfix(string str)
{
    cout << str << endl;
    unordered_map<char, int> prec;
    prec['*'] = 3;
    prec['/'] = 3;
    prec['+'] = 2;
    prec['-'] = 2;
    prec['('] = 1;

    stack<char> opstack;
    vector<char> output;
    string letsnums = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (char token : str)
    {
        if (token == ' ')
        {
            continue;
        }
        else if (letsnums.find(token) != string::npos)
        {
            output.push_back(token);
        }
        else if (token == '(')
        {
            opstack.push(token);
        }
        else if (token == ')')
        {
            char top_token;
            top_token = opstack.top();
            opstack.pop();
            while (top_token != '(')
            {
                output.push_back(top_token);
                top_token = opstack.top();
                opstack.pop();
            }
        }
        else
        {
            while (!opstack.empty() && (prec[token] <= prec[opstack.top()]))
            {
                output.push_back(opstack.top());
                opstack.pop();
            }
            opstack.push(token);
        }
    }
    while (!opstack.empty())
    {
        output.push_back(opstack.top());
        opstack.pop();
    }

    string s(output.begin(), output.end());
    return s;
}

int main()
{   
    string infix;
    cout << "Type in infix: " << endl;
    cin >> infix;
    cout << "Postfix: " << infix_to_postfix(infix) << endl;
    return 0;
}