#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> A;
    vector<vector<int>> B;
    vector<int> C;
    vector<vector<int>> Sum;
    int Number;
    int Size;
    int Size2;

    cin >> Size >> Size2;

    for (int i = 0; i < Size; i++)
    {
        A.push_back(C);
        for (int j = 0; j < Size2; j++)
        {
            cin >> Number;
            A[i].push_back(Number);
        }
    }

    for (int i = 0; i < Size; i++)
    {
        B.push_back(C);
        for (int j = 0; j < Size2; j++)
        {
            cin >> Number;
            B[i].push_back(Number);

        }
    }

    for (int i = 0; i < Size; i++)
    {
        Sum.push_back(C);

        for (int j = 0; j < Size2; j++)
        {
            Sum[i].push_back(B[i][j] + A[i][j]);

            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}