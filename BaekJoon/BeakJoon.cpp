#include <iostream>
#include <vector>

using namespace std;


int main() 
{
    int NumberOne = 1;
    int NumberTwo = 1;
    vector<int> Case;
    int i = 0;

    while (NumberOne != 0 && NumberTwo != 0)
    {
        cin >> NumberOne >> NumberTwo;

        if (NumberOne > NumberTwo)
        {
            if (NumberOne % NumberTwo == 0)
                Case.push_back(1);
            else
                Case.push_back(3);
        }
        else if (NumberOne < NumberTwo)
        {
            if (NumberTwo % NumberOne == 0)
                Case.push_back(2);
            else
                Case.push_back(3);
        }
    }

    for (int j = 0; j < Case.size(); j++)
    {
        if (Case[j] == 1)
            cout << "multiple" << endl;
        else if (Case[j] == 2)
            cout << "factor" << endl;
        else
            cout << "neither" << endl;
    }

    return 0;
}