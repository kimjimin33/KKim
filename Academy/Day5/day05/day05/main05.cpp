#include<iostream>
using namespace std;

void main()
{
	// continue; break;
	// 
	//반복문을 조금 윤택하게 사용하기 위해 나온 문법

	// continue; =>이번 분기를 skip하고 계속 진행한다.
	// breakl =>> 반복문을 종료한다.

	int arr[1000] = {};
	for (int i = 0; i < 1000; i++)
	{
		// i가 3의 배수만 특별하게 처리해주고 싶다.
		if (i % 3 == 0)
		{
			arr[i] = 1000 + i;
		}
		else
		{
			arr[i] = i;
		}
	}
	// arr의 배열에서 3의 배수만 출력하고 싶다.
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 == 0)
		{
			if (arr[i] % 3 != 0)
			{
				// 반복문 로직 안에서 유효성 체크할 때 많이 쓰입니다
				continue;
			}
			cout<<"arr["<<i<<"]="<<arr[i]<<endl;
		}
	}

	// break;
	// 중간에 반복문이 나옴
	for (int i = 0; i < 1000;i++)
	{
		if (i == 500)
		{
			break; //500에서 스탑
			//continue 이면 // 500빼고 나옴 0~1000까지
		}
		cout << i << endl;
	}

}