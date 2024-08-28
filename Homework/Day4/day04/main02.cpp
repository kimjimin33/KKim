#include<iostream>


// 매직넘버를 사용한 경우( 비추천) 
void main()
{
	//수도코드
	// [출력] 가위(0), 바위(1), 보(2) 중에서 선택해주세요
	// [입력] playerHand
	// [출력] [payerHand]를 선택하였습니다
	// [로직] comHand = rand()%3
	// [출력] 컴퓨터는 [comHand]를 선택하였습니다.
	// [IF] (playerHand == comhand)
	//			비겼습니다.
	// [IF] (playerHand == 0 && comHand == 1)
	//			졌습니다.
	// [IF] (playerHand == 1 && comHand == 2)
	//			졌습니다.
	// [IF] (playerHand == 2 && comHand == 0)
	//			졌습니다.
	// [ELSE] 
	//			이겼습니다.
	srand(time(NULL));
	printf("가위(0), 바위(1), 보(2) 중에서 선택해주세요\n");
	int playerHand = 0;
	int comHand = 0;
	scanf_s("%d", &playerHand);
	comHand = rand() % 3;
	

	// 플레이어 선택
	if (playerHand == 0)
	{
		printf("플레이어는 가위를 선택하였습니다.\n");
	}
	else if (playerHand == 1)
	{
		printf("플레이어는 바위를 선택하였습니다.\n");
	}
	else if (playerHand == 2)
	{
		printf("플레이어는 보를 선택하였습니다.\n");
	}

	// 컴퓨터 선택
	if (comHand == 0)
	{
		printf("컴퓨터는 가위를 선택하였습니다.\n");
	}
	else if (comHand == 1)
	{
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	}
	if (comHand == 2)
	{
		printf("컴퓨터는 보를 선택하였습니다.\n");
	}
	
	// [IF] (playerHand ==comHand)
	//			비겼습니다.
	// [IF] (playerHand ==0 &&comHand == 1)
	//			졌습니다.		
	// [IF] (playerHand ==1 &&comHand == 2)
	//			졌습니다.		
	// [IF] (playerHand ==2 &&comHand == 0)
	//			졌습니다.	
	// [ELSE]
	//			이겼습니다.



	// 결과값
	if (playerHand == comHand)
	{
		printf("비겼습니다.\n");
	}
	else if (playerHand == 0 && comHand == 1)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == 1 && comHand == 2)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == 2 && comHand == 0)
	{
		printf("졌습니다.\n");
	}
	else
	{
		printf("이겼습니다.\n");
	}

	



}