#include<iostream>

using namespace std;

void main()
{
	//오늘 숙제
	//숫자 야구 만들기

	// 수도 코드
	// 컴퓨터가 랜덤으로 3가지 수를 고른다
	// 각 자리를 선언한다
	// (여기서 숫자는 중복 x, 첫번째는 0이면 x)
	// 플레이어가 3가지 숫자를 고른다
	// (여기서 숫자는 중복 x, 첫번째는 0이면 x)
	// 이것을 9번 반복한다
	// 자릿수와 숫자가 모두 일치하면 strike 
	// 숫자는 일치하지만 자릿수가 일치하지 않으면 ball
	// 을 카운트하여 현황판을 출력한다

	srand(time(NULL));

	int comHand;
	int playerHand[3];
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;

	cout << "당신은 3가지 숫자를 고릅니다.\n";
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
	cout << "컴퓨터가 고른 숫자는" << comHand << "입니다" << endl;

	




	return 0;
}