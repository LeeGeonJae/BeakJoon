#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int CaseCount;
    int StudentNumber;
    int Score[1000] = {};
    float Average = 0;
    float AverageStd[1000] = {};

    cout << fixed;
    cout.precision(3);

    cin >> CaseCount;

    for (int i = 0; i < CaseCount; i++)
    {
        int SumScore = 0;
        cin >> StudentNumber;

        for (int j = 0; j < StudentNumber; j++)
        {
            int ScoreCin;
            cin >> ScoreCin;
            Score[j] = ScoreCin;
            SumScore += ScoreCin;

            if (j == StudentNumber - 1)
                Average = (SumScore / StudentNumber);
        }

        for (int q = 0; q < StudentNumber; q++)
        {
            if (Score[q] > Average)
                AverageStd[i] = AverageStd[i] + 1.0f;
        }
        AverageStd[i] = AverageStd[i] / StudentNumber * 100;
    }

    for (int i = 0; i < CaseCount; i++)
        cout << AverageStd[i] << "%" << endl;;

    return 0;
}