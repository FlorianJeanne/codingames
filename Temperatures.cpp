#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    
    int result = 0;

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        if (result == 0)
        {
            result = t;
        }
        else if (abs(t) < abs(result))
        {
            result = t;
        }
        else if ((abs(t) == abs(result)) && (t != result))
        {
            result = abs(t);
        }
    }

    cout << result << endl;
}
