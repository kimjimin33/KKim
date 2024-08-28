﻿#include<iostream>

using namespace std;

/*
출력예시)

1레벨 고블린과 조우하였습니다. //플레이어 게벨이라는 것이 존재
던전에 입장하였습니다.

1레벨 고블린과 조우하였습니다. // 고블린 레벨이 존재하나?
( 1: 싸우기, 2: 도망가기) // if문

-> 싸우기 선택시, (고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
-> 사망하면 게임 종료, 전투에서 승리시, 레벨업

-> 도망가기 선택시, 10% 확률로 사망
-> 사망하면 게임 종료 

2레벨 고블린과 조우하였습니다.
(1: 싸우기, 2: 도망가기)

-> 싸우기 선택시, (고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
-> 사망하면 게임 종료, 전투에서 승리시, 레벨업

-> 도망가기 선택시, 10% 확률로 사망
-> 사망하면 게임 종료
*/
void main()
{
	// 수도코드
	// [선언] 플레이어 레벨 = 1
	// [출력] 플레이어는 [플레이어레벨] 레벨입니다.
	// [출력] 던전에 입장하였습니다.
	// [출력] 1레벨 고블린과 조우하였습니다. (1: 싸우기, 2: 도망가기)
	// [입력] choice
	// [IF] choice == 1
	//		(고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
	//		-> 사망하면 게임 종료, 전투에서 승리시, 레벨업
	//[IF] choice == 2
	//		도망가기 선택시, 10% 확률로 사망
	//		-> 사망하면 게임 종료
	// [출력] 플레이어는 []레벨로 던전에 탈출하였습니다.
	// [출력] 출하드립니다 게임을 클리어하였습니다.
	srand(time(NULL));
	bool playerAlive = true;
	int playerLevel = 1;
	cout << "플레이어는" << playerLevel << "레벨 입니다." << endl;
	cout << "던전에 입장하였습니다." << endl;
	cout << "1레벨 고블린과 조우하였습니다.(1: 싸우기, 2: 도망가기)" << endl;
	int choice = 0;
	//cin >> choice == scanf_s("%d",&choice)
	cin >> choice;
	if (choice == 1)
	{
		cout << "싸우기를 선택하였습니다" << endl;
		float diePoint = (float)1 / (float)(1 + playerLevel * 2) * 100; //%로 변환
		int random = rand()%100;
		if (random < diePoint)
		{
				//사망
			cout << "플레이어는 사망하였습니다." << endl;
			playerAlive = false;
			exit(0);
		}
		else
		{
			playerLevel++;
			cout << "전투에서 승리하였습니다." << endl;
			cout << "플레이어가 레벨이 올랐습니다. 현재레벨:" << playerLevel << endl;
		}
	}
	else if (playerAlive && choice == 2)
	{
		//		->도망가기 선택시, 10% 확률로 사망
		//		-> 사망하면 게임 종료
		int random = rand() % 100;
	

		if (random < 10)
		{
			playerAlive = false;
			cout << "플레이어가 사망하였습니다." << endl;
			exit(0);
		}
		else
		{
			cout << "플레이어가 도망에 성공하였습니다." << endl;
		}
	}

	cout << "플레이어는" << playerLevel << "레벨로 던전에 탈출하였습니다." << endl;
	cout << "축하드립니다. 게임을 클리어하였습니다." << endl;





}