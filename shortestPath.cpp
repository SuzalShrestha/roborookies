#include <iostream>
#include <string>
using namespace std;
using std::string;
void ifu(string intake){
for(int x=0;x<intake.length();x++){
    if(intake[x]=='U'){ 
    return 1;
        }
    }
    return 0;
}
void shortestPath(string input)
{
    while (ifu(input)==1)
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
