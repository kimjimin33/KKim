#include<iostream>
using  namespace std;

void main()
{
	//[If��] ~�� ~�Ѵ�
	//����@@
	//if ( boolean )
	//{
	//		boolean�� true�� ������ ����
	//}

	bool check = true;
	int year = 2024;
	if (check)
	{
		printf("���ش� 2024�⵵ �Դϴ�.\n");
	}

	//[�񱳿�����]
	// == : ���ʰ� �������� ����
	// != : ���ʰ� �������� �ٸ���

	//�񱳿������� ����� �׻� boolean
	// ex. 1 > 2 (false)
	// ex. 1 < 2 (true)
	//if (boolean)
	//{
	//	boolean�� false�� ������ ����
	//}

	//[IF ELSE ��]
	int hp = 10;
	if (hp > 0)
	{
		printf("�� ������ ����ֽ��ϴ�.\n");
	}
	else
	{
		printf("�� ������ �׾����ϴ�.\n");
	}
	//[IF, ELSE IF, ELSE ��]
	//if (boolean)
	//{
	//	boolean�� true�� ������ ����
	//}
	//else if (boolean2)
	//{
	//		boolean�� false��,
	//		boolean�� falsr�� ������ ����
	//}

	//���� boolean�̸� ~�� �����ϰ�
	//�׷����ʰ� ���� boolean2�� ~�� �����ϰ�
	//�׷��� ������ ~�� �����Ѵ�.

	int score = 80;

	if (90 < score)
	{
		printf("�� �л��� A�����Դϴ�.\n");
	}
	else if (80 < score)
	{
		printf("�� �л��� B�����Դϴ�.\n");
	}
	else if (70 < score)
	{
		printf("�� �л��� C�����Դϴ�.\n");
	}
	else
	{
		printf("�� �л��� F�����Դϴ�.\n");
	}

	//������
	int result1 = 3 + 5;
	int result2 = 2 * 5;
	printf("result1 :%f\n", result1);
	printf("result2 :%s\n", result2);
}