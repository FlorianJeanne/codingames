#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> powers;
    int distMini = 10000000;
    int max = 0;
    int min = 10000000;
    int N;

    cin >> N; cin.ignore();

    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();

        if (Pi > max)
        {
            int d = Pi - max;
            if (d < distMini)
                distMini = d;
            max = Pi;
        }
        else if (Pi < min)
        {
            int d = min - Pi;
            if (d < distMini)
                distMini = d;
            min = Pi;
        }
        else
        {
            for (int j = 0; j < i; ++j)
            {
                int d = abs(powers[j] - Pi);
                if (d < distMini)
                    distMini = d;
            }
        }
        powers.push_back(Pi);
    }

    cout << distMini << endl;
}
