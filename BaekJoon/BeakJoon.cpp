//�Է�
//ù �ٿ� �׽�Ʈ���̽��� ���� T�� �־�����.T�� �ִ� 1, 000, 000�̴�.���� T�ٿ��� ���� �� ���� A�� B�� �־�����.A�� B�� 1 �̻�, 1, 000 �����̴�.
//
//���
//�� �׽�Ʈ���̽����� A + B�� �� �ٿ� �ϳ��� ������� ����Ѵ�.

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int Count;
	int a;
	int b;

	cin >> Count;

	for (int i = 0; i < Count; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}