#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int WordNumber = 0;
    string Word;

    cin >> Word;

    for (int i = 0; i < Word.length(); i++)
    {
        WordNumber++;
        if (Word[i] == 'c' && Word[i + 1] == '=')
            i++;
        else if (Word[i] == 'c' && Word[i + 1] == '-')
            i++;
        else if (Word[i] == 'd' && Word[i + 1] == 'z' && Word[i + 2] == '=')
            i = i + 2;
        else if (Word[i] == 'd' && Word[i + 1] == '-')
            i++;
        else if (Word[i] == 'l' && Word[i + 1] == 'j')
            i++;
        else if (Word[i] == 'n' && Word[i + 1] == 'j')
            i++;
        else if (Word[i] == 's' && Word[i + 1] == '=')
            i++;
        else if (Word[i] == 'z' && Word[i + 1] == '=')
            i++;
    }

    cout << WordNumber << endl;

    return 0;
}