#include<iostream>

void main()
{
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
	if (choice ==1)
	{
		result = num1 + num2;
		printf("%d + %d = %d", num1, num2, result);
	}
	else if(choice == 2)
	{
		result = num1 - num2;
		printf("%d - %d = %d", num1, num2, result);
	}
	else if (choice == 3)
	{
		result = num1 * num2;
		printf("%d * %d = %d", num1, num2, result);
	}
	else if (choice == 4)
	{
		result = num1 / num2;
		printf("%d / %d = %d", num1, num2, result);
	}


	/*
	1. BMI ���� ���α׷� �����
	//����ؼ�
	1. Ű(m)�� �Է����ּ���
	2. ������(kg)�� �Է����ּ���
	3. BMI ����:
	4. ��ü���Դϴ�. (0~18.5 ��ü��, ~23 ����ü��, ~25 ��ü��, ~30 ��, ~���Ѵ� ����)
	*/

	/*
	2. ���� ����
	//����ؼ�
	//�߰��� ������ �Է��Ͻÿ�.
	//�⸻�� ������ �Է��Ͻÿ�.
	//�⼮ ������ �Է��Ͻÿ�.
	//���� ������ �Է��Ͻÿ�.
	// ~�Դϴ� (0~60 F, ~70 D, ~80 C, ~90 D, ~100 A)
	*/

	/*
	3.Ȧ�� ¦�� �Ǻ���
	//��� ����
	//���ڸ� �Է��Ͻÿ�. [14]
	//14�� ¦���Դϴ�.
	*/
	
}