#include<iostream>

void main()
{
	//프로그램을 만들때,
	//꼭 수도코드를 적어주세요
	//노트에 적는게 베스트
	//노트 가지고 다니기
	int num1 = 50;
	int num2 = 30;
	int choice = 0;
	int result = 0;

	printf("숫자 1을 입력해주세요:\n");
	scanf_s("%d", &num1);
	printf("숫자 2를 입력해주세요:\n");
	scanf_s("%d", &num2);


	printf("어떤 연산을 진행할까요?");
	printf(" (1번: +, 2번: -, 3번: *, 4번: /) : ");
	scanf_s("%d", &choice);

	//수도코드
	//출력 : "숫자1을 입력해주세요"
	printf("숫자1을 입력해주세요");
	//입력 : num1 변수
	scanf_s("%d", & num1);
	//출력 : "숫자2를 입력해주세요"
	printf("숫자2을 입력해주세요");
	//입력 : num2 변수
	scanf_s("%d", & num2);
	//출력 : "어떤 연산을 진행할까요? :"
	//입력 : choice 변수
	//
	//만약 choice == 1이면
	if (choice == 1)
	{
		//		result = num1 + num2
		result = num1 + num2;
	}
	//그렇지 않고 만약 choice ==2 이면
	else if (choice == 2)
	{
		//	result = num1 - num2
		result = num1 - num2;
	}
	//그렇지 않고 만약 choice ==3 이면
	else if (choice == 3)
	{
		//	result = num1 * num2
		result = num1 * num2;
	}
	//그렇지 않고 만약 choice ==4 이면
	else if (choice == 4)
	{
		//	result = num1 / num2
		result = num1 * num2;
	}
	//
	//출력 : 결과 : result

	



}