#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    string c2("");

    // Base 10 to 2
    for(char& c : MESSAGE)
    {
        bitset<7> b = (int) c;
        c2 += b.to_string();
    }

    int i = 0;
    while(i < c2.length())
    {
        if(i != 0)
        {
            cout << " ";
        }

        if(c2[i] == '0')
        {
            cout << "00 ";
            while(c2[i] == '0')
            {
                cout << "0";
                ++i;
            }
        }
        else
        {
            cout << "0 ";
            while(c2[i] == '1')
            {
                cout << "0";
                ++i;
            }
        }
    }
}
