//����
//�� ���� A�� B�� �Է¹��� ����, A + B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.
//
//�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
//
//�Է��� ���������� 0 �� ���� ���´�.
//
//���
//�� �׽�Ʈ ���̽����� A + B�� ����Ѵ�.

#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	bool Zero = false;

	while (Zero == false)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			Zero = true;
			break;
		}
		cout << a + b << endl;
	}

	return 0;
}