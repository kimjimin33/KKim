#include<iostream>

using namespace std;

void main()
{
	// 다차원 배열
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// arr[0] ~ arr[10]
	// 위 식을 다차원 배열로 나타내면 아래 식임

	for (int i = 0;i < 10;i++)
	{
		cout << "arr[i]=" << arr[i] << endl;
	}


	int arr2[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	// 2차원 배열임
	// [2]는 배열의 행의 개수를 의미
	// [5]는 배열의 열의 개수를 의미

	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << "arr2[i]=" << arr[i] << endl;
		}
	}
	// 빙고판
	int bingo[25] = {}; // 크기가 25인 1차원 배열 선언
	int bingo2[5][5] = {}; // 5x5 크기의 2차원 배열을 선언
	for (int i = 0;i < 25;i++)
	{
		bingo[i] = i + 1;  // 배열 인덱스가 0부터 시작하기에
		// 0~4=> 0,0 ~ 0,4
		// 5~9=> 1,0 ~ 1,4
		bingo2[i / 5][i % 5] = i + 1;
	}
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << bingo2[i][j] << "\t";
			// \t 일정 글자수 확보
		}
		cout << endl;
	}


}