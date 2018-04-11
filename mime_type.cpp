#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();
    map<string, string> table;

    for (int i = 0; i < N; i++) {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
        transform(EXT.begin(), EXT.end(), EXT.begin(), ::toupper);
        table[EXT] = MT;
    }
    for (int i = 0; i < Q; i++) {
        string FNAME; // One file name per line.
        getline(cin, FNAME);

        if(FNAME.find(".") == string::npos)
        {
            cout << "UNKNOWN" << endl;
            continue;
        }

        string str = FNAME.substr(FNAME.find_last_of('.')+1);
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        map<string, string>::iterator it = table.find(str);

        if(it != table.end())
        {
            cout << it->second << endl;
        }
        else
        {
            cout << "UNKNOWN" << endl;
        }
    }
}
