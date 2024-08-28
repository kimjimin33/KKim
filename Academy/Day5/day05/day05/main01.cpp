#include<iostream>

using namespace std;

void main()
{
	//1. 숙제 풀이 - 로또
	//수도 코드

	/*
	int lotto[45]
	1. lotto => 1~45 까지 초기화
	2. lotto 배열을 섞어준다. => shuffle(lotto)
			for (100000)
			intdex1을 0~44까지 랜덤으로 뽑는다.
			intdex2를 0~44까지 랜덤으로 뽑는다.
			lotto[index1] <-> lotto[index2]를 swap한다.
	3. 앞에서부터 7개를 출력
	*/

	/*
	턴재 전투 수도코드
	 - 플레이어 행동으로 결정한다.
	 - 결정된 행동에 따라 플레이어가 행동한다.
	 - 상대 턴으로 넘어간다.
	*/
	srand(time(NULL));
	int lotto[45] = {};
	for (int i= 0; i < 45;i++)
	{
		lotto[i] = i+1;
	}
	// lotto[0] = 1;
	// lotto[1] = 2;
	// lotto[2] = 3;
	// 이런식으로 코드가 반복되므로 이걸 for 로 정의

	//초기화가 잘되었는지 확인해보는 방법
	// 1. 로그 찍어보기
	// 2. 디버깅하기
	
	
	/*  [로그 찍어보기] 
	for (int i = 0; i < 45; i++)
	{
		cout << "lotto[" << i << "]=" << lotto[i] << endl;
	}
	*/
	
	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;



	}

	// 7개 출력
	cout << "로또번호 : ";
	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << " ";

	}
	cout << endl;



}
