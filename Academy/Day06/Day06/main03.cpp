#include<iostream>


using namespace std;

// 2. 숙제 풀이 - 별찍기

void main()
{
	for (int i = 0; i < 5;i++) // 바깥쪽 for 루프: 행 반복
	{
		for (int j = 0;j < 5;j++) // 안쪽 for 루프: 열 반복
		{
			cout << "[" << i << "" << j << "]" ; // 각 좌표 출력
		}
		cout << endl; // 각 행이 끝날 때마다 줄마꿈 출력
	}

	// 1번
	// *
	// **
	// ***
	// ****
	// *****

	for (int i = 0;i < 5;i++)  // 행 반복
	{
		for (int j = 0;j < 5;j++) // 열 반복
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl; // 별 출력 후 줄바꿈
	}
	cout << endl << endl;

	// 2번
	// *****
	// ****
	// ***
	// **
	// *

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i+j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	// 3번
	//       *
	//     **
	//   ***
	//  ****
	//*****

	for (int i = 0;i < 5; i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl << endl;
	// 4번
	//*****
	//  ****
	//    ***
	//      **
	//        *

	for (int i = 0;i < 5; i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl << endl;
	// 5번
	//*     *****
	//**    ****
	//***  ***
	//**** **
	//******
	//      *****
	//    ** ****
	//   ***  ***
	//  ****   **
	//*****     *
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i+j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}