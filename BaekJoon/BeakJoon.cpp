#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int Divisor;
    int Number;
    int Count = 1;

    cin >> Number >> Divisor;

    if (Number % Divisor == 0)
    {
        for (int i = 1; i < Divisor; i++)
        {
            if (Number % i == 0)
                Count++;
        }

        cout << Count << endl;
    }
    else
        cout << "0" << endl;

    return 0;
}