#include<iostream>

using namespace std;

void main()
{
	//������ �����ؼ� ����ϴ� ��

	//����ڰ� ���� ���� �Է��ؼ�
	//�װŴ�� �ڱ�Ұ��� �Ҽ��ִ� ���α׷�

	//����ڰ� ���� ���� �Է��ϴ� ���

	//�Է�: scanf_s ��� �Լ��� ���ؼ� ����
	//����@@ scanf_s("%d",&������);
	//=>�����ȿ� ����ڰ� �Է��� ���� ��

	int year = 0;
	printf("�¾ ������ �Է����ּ���:");
	scanf_s("%d\n", &year);



	char name[100] = "";
	printf("�̸��� �Է����ּ���:");
	scanf_s("%s", name, (int)sizeof(name));

	printf("�� �̸��� %s�Դϴ�.\n", name);
	printf("���� %d��� �Դϴ�.\n", year);

}
