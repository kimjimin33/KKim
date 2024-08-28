#include<iostream>
#include<time.h>



// 옛날 방식
int main()
{
	
	srand(time(NULL));
	printf("가위, 바위, 보 중에서 선택해주세요\n");
	int playerHand = 0;
	int comHand = 0;


	// 상수로 써주는 값은 모두 대문자로 써줍니다 (혹은 파스칼)
	int SCISSOR = 0;
	int ROCK = 1;
	int PAPER = 2;
	int ROCKSCISSORPAPER_END = 3;

	scanf_s("%d", &playerHand);
	comHand = rand() % ROCKSCISSORPAPER_END;

	// 플레이어 선택
	if (playerHand == SCISSOR)
	{
		printf("플레이어는 가위를 선택하였습니다.\n");
	}
	else if (playerHand == ROCK)
	{
		printf("플레이어는 바위를 선택하였습니다.\n");
	}
	else if (playerHand == PAPER)
	{
		printf("플레이어는 보를 선택하였습니다.\n");
	}

	// 컴퓨터 선택
	if (comHand == SCISSOR)
	{
		printf("컴퓨터는 가위를 선택하였습니다.\n");
	}
	else if (comHand == ROCK)
	{
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	}
	else if (comHand == PAPER)
	{
		printf("컴퓨터는 보를 선택하였습니다.\n");
	}


    // 결과값
	if (playerHand == comHand)
	{
		printf("비겼습니다.\n");
	}
	else if (playerHand == SCISSOR && comHand == ROCK)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == ROCK && comHand == PAPER)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == PAPER && comHand == SCISSOR)
	{
		printf("졌습니다.\n");
	}
	else
	{
		printf("이겼습니다.\n");
	}




	return 0;
}