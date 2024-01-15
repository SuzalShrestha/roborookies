#include <iostream>
#include <string>
using namespace std;
using std::string;
void shortestPath(string input)
{
    while (input.length() > 3)
    {
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == 'S' && input[i + 1] == 'U' && input[i + 2] == 'R')
            {
                input.erase(i, 3);
                input.insert(i, "L");
                break;
            }
            else if (input[i] == 'R' && input[i + 1] == 'U' && input[i + 2] == 'R')
            {
                input.erase(i, 3);
                input.insert(i, "S");
                break;
            }
        }
    }
    cout << input;
}
int main()
{
    // reducing string "SUR"to "L" and "RUR" to "S" until no more reducible string is left
    string input = "SRURSUR";
    shortestPath(input);
}
