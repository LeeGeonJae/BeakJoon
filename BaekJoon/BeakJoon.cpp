//����
//�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����.��° �ٿ��� ������ �������� ���еǾ����ִټ�° �ٿ��� ã������ �ϴ� ���� v�� �־�����.�Է����� �־����� ������ v�� - 100���� ũ�ų� ������, 100���� �۰ų� ����.
//
//���
//ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Count;
    int Find;
    int Sum = 0;

    cin >> Count;
    vector<int> a;

    for (int i = 0; i < Count; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }

    cin >> Find;

    for (int i = 0; i < Count; i++)
    {
        if (a[i] == Find)
            Sum++;
    }

    cout << Sum << endl;

    return 0;
}