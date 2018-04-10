#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    while (1) {
        int height(0), id(0);
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            if (mountainH >= height)
            {
                height = mountainH;
                id = i;
            }
        }

        cout << id << endl;
    }
}
