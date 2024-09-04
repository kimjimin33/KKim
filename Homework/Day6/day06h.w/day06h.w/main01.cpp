#include <iostream>

using namespace std;

#define NUMBER_SIZE 4

int computerNumber[NUMBER_SIZE] = {};
int userNumber[NUMBER_SIZE] = {};
bool isUserNumberComplete = false;
int strike = 0;
int ball = 0;


void ChooseComputerNumber();
void ChooseUserNumber();
void CompareNumbers();
void CheckValidationUserNumber();
void PrintStrikeBallCount();
void InitUserVariable();


void main()
{
	srand(time(NULL));
	ChooseComputerNumber();
	for (int i = 0;i < 9;i++)
	{
		while (isUserNumberComplete == false)
		{
			ChooseUserNumber();
			CheckValidationUserNumber();
		}
		CompareNumbers();
		PrintStrikeBallCount();
	
		if (strike == NUMBER_SIZE)
		{
			break;
		}
		InitUserVariable();
	}


}
void ChooseComputerNumber()
{
	// 컴퓨터가 랜덤 숫자를 뽑는다
	int arr[10] = {};
	for (int i = 0;i < 10;i++)
	{
		arr[i] = i;
	}
	// 배열을 섞은 다음에
	for (int i = 0;i < 1000;i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}
		// 첫번째 자리가 0만 안되게 뽑기
		if (arr[0] == 0)
		{
			// 뒤에서부터 4개를 뽑는다.
			// 천의 자릿수 arr[9]
			// 백의 자릿수 arr[8]
			// 십의 자릿수 arr[7]
			// 일의 자릿수 arr[6]

		computerNumber[0] = arr[9];
		computerNumber[1] = arr[8];
		computerNumber[2] = arr[7];
		computerNumber[3] = arr[6];
		for (int i = 0; i < NUMBER_SIZE;i++)
		{
			computerNumber[i] = arr[9 - i];
		}
	}
	else
	{
		// 천의 자릿수 arr[0]
		// 백의 자릿수 arr[1]
		// 십의 자릿수 arr[2]
		// 일의 자릿수 arr[3]
		for (int i = 0;i < NUMBER_SIZE;i++)
		{
			computerNumber[i] = arr[i];
		}
	}
	cout << "[디버깅용]입력한 computerNumber: ";
	for (int i = 0;i < NUMBER_SIZE;i++)
	{
		cout << computerNumber[i];
	}
	cout << endl;
}
void ChooseUserNumber()
{
	// 2. 유저가 랜덤숫자를 외친다
	// 플레이어는 회마다 겹치지 않는 숫자를 부른다

	int tempNumber;
	cout << "부를 숫자를 입력해주세요: ";

	cin >> tempNumber;
	//1234
	/*
	userNumber[0]=tempNumber/1000;
	userNumber[1]=tempNumber/100%10;
	userNumber[2]=tempNumber/10%10;
	userNumber[3]=tempNumber/1%10;
	*/
	// 반복문으로 처리 가능
	for (int i = 0;i < NUMBER_SIZE;i++)
	{
		int length = NUMBER_SIZE - 1 - i;
		int divNumber = 1;
		for (int j = 0;j < length;j++)
		{
			divNumber *= 10;
		}
		userNumber[i] = tempNumber / divNumber % 10;
	}

	cout << "[디버깅용]입력한 userNumber: ";
	for (int i = 0;i < NUMBER_SIZE;i++)
	{
		cout << userNumber[i];
	}
	cout << endl;
}

void CheckValidationUserNumber()
{
	isUserNumberComplete = true;
	for (int i = 0; i < NUMBER_SIZE;i++)
	{
		int checkNumber = userNumber[i];
		for (int j = i + 1;j < NUMBER_SIZE;j++)
		{
			int checkNumber2 = userNumber[j];

			if (checkNumber == checkNumber2)
			{
				isUserNumberComplete = false;
			}
		}
	}
	if (userNumber[0] == 0)
	{
		isUserNumberComplete = false;
	}
}
void CompareNumbers()
{
	for (int i = 0;i < NUMBER_SIZE;i++)
	{
		int currentComputerNumber = computerNumber[i];
		for (int j = 0;j < NUMBER_SIZE;j++)
		{
			int currentUserNumber = userNumber[j];

			if (currentComputerNumber == currentUserNumber)
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}
}
void PrintStrikeBallCount()
{
	cout << strike << "스트라이크!" << ball << "볼!" << endl;
}
void InitUserVariable()
{
	for (int i = 0; i < NUMBER_SIZE;i++)
	{
		userNumber[i] = 0;
	}
	isUserNumberComplete = false;
	strike = 0;
	ball = 0;
}