﻿#include<iostream>

using namespace std;

// 1. 빙고 숙제
	// 내 빙고판과 컴퓨터 빙고판이 존재한다
	// 둘다 1~25 까지의 숫자가 적혀있고
	// 빙고판의 숫자는 랜덤으로 섞여져 있다
	// 나와 컴퓨터가 돌아가면서 숫자를 외치면
	// 둘다 그 숫자를 빙고판에 X친다
	// 둘 중 한명이라도
	// 빙고를 3개를 완성하면 (가로줄,세로줄,대각선줄)
	// 게임 종료


/*
1. 내 빙고판과 상대 빙고판을 정의한다
2. 각 빙고판은 5x5로 1~25까지의 숫자가 적혀있다
3. 각 숫자는 랜덤으로 섞여있다.
4. 나와 컴퓨터가 한번씩 돌아가며 숫자를 외치는 것을 반복한다
5. 한 명이 먼저 3개를 완성하면 반복이 끝난다
(가로줄, 세로줄, 대각선줄)
*/

int myBoard = {};
int comBoard = {};
int num = {};

// a1,a2,a3,a4,a5
// b1,b2,b3,b4,b5
// c1,c2,c3,c4,c5
// d1,d2,d3,d4,d5
// e1,e2,e3,e4,e5

// 1. 문자가 같을 때
// 2. 숫자가 같을 때
// 3. a1,b2,c3,d4,e5
// 4. a5,b4,c3,d2,e1

// 인 경우에 빙고!


void main()
{
	// 내가 내는 값
	cout << "당신의 빙고판을 완성하세요" << endl;

	int arr[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };

	if (num < 1 || num>25)
	{
		cout << "오류. 1~25 사이의 숫자를 입력하세요";
	}
	
	// 컴퓨터가 내는 값
	srand(time(NULL));

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			comBoard[i][j] = rand() % 25 + 1;
		}
	}

	// 둘중 하나가 빙고판 3줄을 완성하는 경우

	// 잘 모르겠습니다




}
