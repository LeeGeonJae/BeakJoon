#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Alphabet[26] = {};
    int Most = 0;
    int Count = 0;
    bool MostDouble;
    string Word;

    cin >> Word;

    for (int i = 0; i < Word.length(); i++)
    {
        if (Word[i] >= 'a')
            Alphabet[Word[i] - 'a']++;
        else
            Alphabet[Word[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (Count < Alphabet[i])
        {
            Count = Alphabet[i];
            Most = i;
            MostDouble = false;
        }
        else if (Count == Alphabet[i])
            MostDouble = true;
    }

    if (MostDouble)
        cout << "?" << endl;
    else if (Most >= 26)
        cout << (char)(Most - 26 + 'A') << endl;
    else
        cout << (char)(Most + 'A') << endl;

    return 0;
}