//������� ���� ����� ������ ���� ���Ѵ�.����� ���ڸ� �дµ� ������ �ִ�.�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���.����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���.�� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
//
//����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�.���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
//
//�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string First;
    string Second;
    string High;

    char temp;

    cin >> First >> Second;

    temp = First.front();
    First[0] = First.back();
    First[2] = temp;

    temp = Second.front();
    Second[0] = Second.back();
    Second[2] = temp;

    for (int i = 0; i < 3; i++)
    {
        if ((int)First[i] < (int)Second[i])
        {
            High = Second;
            break;
        }
        else if ((int)First[i] > (int)Second[i])
        {
            High = First;
            break;
        }
    }

    cout << High << endl;

    return 0;
}