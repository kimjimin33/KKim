#include<iostream>

void main()
{
	//���α׷��� ���鶧,
	//�� �����ڵ带 �����ּ���
	//��Ʈ�� ���°� ����Ʈ
	//��Ʈ ������ �ٴϱ�
	int num1 = 50;
	int num2 = 30;
	int choice = 0;
	int result = 0;

	printf("���� 1�� �Է����ּ���:\n");
	scanf_s("%d", &num1);
	printf("���� 2�� �Է����ּ���:\n");
	scanf_s("%d", &num2);


	printf("� ������ �����ұ��?");
	printf(" (1��: +, 2��: -, 3��: *, 4��: /) : ");
	scanf_s("%d", &choice);

	//�����ڵ�
	//��� : "����1�� �Է����ּ���"
	printf("����1�� �Է����ּ���");
	//�Է� : num1 ����
	scanf_s("%d", & num1);
	//��� : "����2�� �Է����ּ���"
	printf("����2�� �Է����ּ���");
	//�Է� : num2 ����
	scanf_s("%d", & num2);
	//��� : "� ������ �����ұ��? :"
	//�Է� : choice ����
	//
	//���� choice == 1�̸�
	if (choice == 1)
	{
		//		result = num1 + num2
		result = num1 + num2;
	}
	//�׷��� �ʰ� ���� choice ==2 �̸�
	else if (choice == 2)
	{
		//	result = num1 - num2
		result = num1 - num2;
	}
	//�׷��� �ʰ� ���� choice ==3 �̸�
	else if (choice == 3)
	{
		//	result = num1 * num2
		result = num1 * num2;
	}
	//�׷��� �ʰ� ���� choice ==4 �̸�
	else if (choice == 4)
	{
		//	result = num1 / num2
		result = num1 * num2;
	}
	//
	//��� : ��� : result

	



}