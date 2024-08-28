#include<iostream>
using namespace std;

void main()
{
	// 랜덤값으로 실습
	// 1. 0~ 3 사이의 숫자 뽑아보기

	//메이플 공격력 (51 ~53)
	// 51 ~ 53 의 랜덤한 데미지가 들어감
	// 2. 51~53 사이의 랜덤 숫자 뽑아보기

	// 1번.
	srand(time(NULL));

	int random1 = rand()%4; // 나머지 값이 0,1,2,3 중 하나

	// 2번. 51~53 사이의 랜덤 숫자 뽑아보기
	int random2 = rand() % 3 + 51;
	// 51~53 을 51로 뺐을 때 0~2가 나옴

	
	
}