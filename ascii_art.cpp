#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);

    vector<string> tab;

    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);

        tab.push_back(ROW);
    }

    for(string val : tab)
    {
        string str;
        for(char& c : T)
        {
            int posC;

            if (((int) c >= 'a') && ((int) c <= 'z'))
            {
                posC = (c - 'a') * L;
            }
            else if (((int) c >= 'A') && ((int) c <= 'Z'))
            {
                posC = (c - 'A') * L;
            }
            else
            {
                posC = ('Z' - 'A' + 1) * L;
            }

            str += val.substr(posC, L);
        }
        cout << str << endl;
    }
}
