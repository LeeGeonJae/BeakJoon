//����
//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//
//������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
//
//�Է�
//ù° �ٿ� N(1 �� N �� 100)�� �־�����.
//
//���
//ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

#include <iostream>

using namespace std;

int main()
{
	int Count;

	cin >> Count;

	for (int i = 1; i <= Count; i++)
	{
		for (int q = 0; q < Count - i; q++)
		{
			cout << " ";
		}
		for (int j = Count - i; j < Count; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}