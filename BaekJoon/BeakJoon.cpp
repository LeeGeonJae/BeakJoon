#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int Number[9][9] = {};
    int NumberInput;
    int BigNumber = 0;
    int Width;
    int High;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> NumberInput;
            Number[i][j] = NumberInput;

            if (BigNumber < Number[i][j])
            {
                BigNumber = Number[i][j];
                Width = i + 1;
                High = j + 1;
            }
        }
    }

    cout << BigNumber << endl;
    cout << Width << " " << High << endl;

    return 0;
}