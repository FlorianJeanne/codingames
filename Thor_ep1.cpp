#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    string direction;

    int x(initialTX), y(initialTY);

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        direction = "";

        if(y < lightY)
        {
            direction = "S";
            ++y;
        }
        else if(y > lightY)
        {
            direction = "N";
            --y;
        }

        if(x < lightX)
        {
            direction += "E";
            ++x;
        }
        else if(x > lightX)
        {
            direction += "W";
            --x;
        }


        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << direction << endl;
    }
}
