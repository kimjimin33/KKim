#include<iostream>

using namespace std;

void main()

{
	//연산자
	// 대입연산자, 비교연산자, 산술연산자, 논리연산자, 증감연산자, 비트연산자

	// 증감연산자
	int number1 = 7;

	//number1 여기에 3을 더하고 싶다.
	number1 = number1 + 3;
	number1 = number1 - 3;

	// 이게 똑같은걸 적는게 귀찮다
	// 나온 연산자가 증감연산자
	number1 = number1 + 3;
	number1 += 3;

	number1 *= 3;
	number1 -= 3;
	number1 /= 3;
	number1 %= 3;
	number1 += 3;

	// 제일 중요한거
	number1 += 1;
	number1 -= 1;

	number1++; // 1더하기
	number1--; // 1빼기
	++number1; // 1더하기
	--number1; // 1빼기

	int num1 = 0;
	printf("\n%d\n", num1++); // 0이 출력
	// ++이 나중에

	int num2 = 0;
	printf("\n%d\n", ++num2); // 1이 출력
	// ++이 먼저

	

	// 논리연산자
	// &&, ||
	// 수도코드를 말로 풀때 중요한 역할을 함
	// and -> &&
	// or -> ||

	// 값싸고(and) 질좋으면 산다

	// 전철이나(or) 버스를 탄다

	// hp가 0보다 아래고 부활스킬을 가졌다면
	//			부활한다.

	// i 버튼을 눌렀거나, 인벤토리 버튼을 눌렀다면
	//		인벤토리 창이 켜진다.

	float hp = -3;
	bool haveResurrection = true;

	if (hp <= 0 && haveResurrection)
	{
		printf("부활한다.\n");
	}
	if (hp <= 0)
	{
		if (haveResurrection)
		{
			printf("부활한다.\n");
		}
	}

	bool InputQKey = true;
	int mp = 100;
	if (InputQKey)
	{
		if (100 < mp)
		{
			printf("Q스킬을 발동한다.\n");
		}
	}

	// 팁을 드리면 
	//		&& 연산은 앞에서부터 false가 나오면 그만둔다
	//		||  연산은 앞에서부터 true가 나오면 바로 중괄호 진입


}