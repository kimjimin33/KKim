#include<iostream>

using namespace std;

void main()
{
	//���� ����
	//���� �߱� �����

	// ���� �ڵ�
	// ��ǻ�Ͱ� �������� 3���� ���� ����
	// �� �ڸ��� �����Ѵ�
	// (���⼭ ���ڴ� �ߺ� x, ù��°�� 0�̸� x)
	// �÷��̾ 3���� ���ڸ� ����
	// (���⼭ ���ڴ� �ߺ� x, ù��°�� 0�̸� x)
	// �̰��� 9�� �ݺ��Ѵ�
	// �ڸ����� ���ڰ� ��� ��ġ�ϸ� strike 
	// ���ڴ� ��ġ������ �ڸ����� ��ġ���� ������ ball
	// �� ī��Ʈ�Ͽ� ��Ȳ���� ����Ѵ�

	srand(time(NULL));

	int comHand;
	int playerHand[3];
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;

	cout << "����� 3���� ���ڸ� ���ϴ�.\n";
	cin >> num1, num2, num3;

	comHand = rand() % 3;
	for (int i = 0; i < 10;i++)
	{
		cin >> comHand >> endl;
	}


	if (num1 == num4)
	{
		cout << "1s";
	}
	if (num2 == num5)
	{
		cout << "1s";
	}
	if (num3 == num6)
	{
		cout << "1s";
	}
	if (num1 == num5 || num6)
	{
		cout << "1b";
	}
	if (num2 == num4 || num6)
	{
		cout << "1b";
	}
	if (num3 == num4 || num5)
	{
		cout << "1b";
	}
	cout << "��ǻ�Ͱ� �� ���ڴ�" << comHand << "�Դϴ�" << endl;

	




	return 0;
}