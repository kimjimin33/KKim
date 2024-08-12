#include<iostream>

void main()
{
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
	1. BMI 측정 프로그램 만들기
	//출력해서
	1. 키(m)를 입력헤주세요
	2. 몸무게(kg)을 입력해주세요
	3. BMI 지수:
	4. 과체중입니다. (0~18.5 저체중, ~23 정상체중, ~25 과체중, ~30 비만, ~무한대 고도비만)
	*/

	/*
	2. 학점 계산기
	//출력해서
	//중간평가 점수를 입력하시오.
	//기말평가 점수를 입력하시오.
	//출석 점수를 입력하시오.
	//과제 점수를 입력하시오.
	// ~입니다 (0~60 F, ~70 D, ~80 C, ~90 D, ~100 A)
	*/

	/*
	3.홀수 짝수 판별기
	//출력 예시
	//숫자를 입력하시오. [14]
	//14는 짝수입니다.
	*/
	
}