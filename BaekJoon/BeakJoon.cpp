#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string Word[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cin >> Word[i];
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > Word[j].length())
                continue;
            else
                cout << Word[j][i];
        }
    }

    return 0;
}