#include<iostream>

using namespace std;

void main()
{
	// 반복문
	// 3가지
	// for, while, do while

	//  for문
	for (int i = 0; i < 1000;i++)
	{

	}
	//-> 1000번 반복한다
	// 주로 for문은 i=0; i++ 은 고정

	// while문
	bool isGamePlaying = true;
	while (isGamePlaying)
	{
		cout << "게임을 진행하겠습니까?(0: 예, 그 외: 아니요)" << endl;
		int choice;
		cin >> choice;
		if (choice == 0)
		{
			isGamePlaying = false;
		}
	}
	

	// while (조건식)
	// {
	//		실행구문
	// }

	// 조건식이 참이면
	// 실행구문을 실행한다

	// 조건식이 참이면
	// 실행구문을 실행한다

	// while문은 보통 언제 쓰는가?
	// while=> ~~하는 동안
	// for=> 몇 번

	//while(조건식)
	//{
	//		실행구문
	//}

	//for(선언식;조건식;증감식)
	//{
	//		실행구문
	//}


	for (int i = 0; i < 10;i++)
	{
		cout << i << endl;
	}
	// while 문으로 변경
	int i = 0;
	while (i < 10)
	{
		cout << i <<endl;
		i++;
	}


	// 자주 안쓰이는 반복문
	// do while

	// do
	//{
	//		실행구문
	// }while(조건식);

	// while 과의 차이점
	// 무조건 1번만 실행한다
	// 조건식이 일치하던 일치하지 않던

	int choice;
	do
	{
		cout << "왼손(0)과 오른손(1) 중에 선택해주세요"<<endl;
			cin >> choice;
	} while (2 < choice || choice < 0);
	cout << "왼손(0)과 오른손(1)중에 선택해주세요" << endl;
	cin >> choice;
	while (2 < choice || choice < 0)
	{
		cout << "잘못 선택하셨습니다. 다시 골라주세요" << endl;
		cin >> choice;
	}
} 