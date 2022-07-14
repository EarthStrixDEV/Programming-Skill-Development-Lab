#include <iostream>
using namespace std;

int main()
{
    //robot
    string code;
    int x = 0;
    int y = 0;
    cin >> code;
    
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] == 'N')
        {
            y++;
        }
        if (code[i] == 'S')
        {
            y--;
        }
        if (code[i] == 'W')
        {
            x--;
        }
        if (code[i] == 'E')
        {
            x++;
        }
        // Z is reset to 0
        if (code[i] == 'Z') 
        {
            x = 0;
            y = 0;
        }
    }
    //final position of the robot

    cout << x << " " << y << endl;

    return 0;
}