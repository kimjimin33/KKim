#include<iostream>

using namespace std;

void main()
{
	//숙제
	// 1번. 로또 번호 생성기
	// 2번. 가위바위보 하나빼기

	// 1번, 로또 번호 생성기
	// 손코딩
	// 난수 설정
	// [출력] 당신의 로또 번호를 생성하겠습니까? (맞으면 0, 틀리면 1)
	// 0인 경우와 1인 경우 if절 통해 나타내기
	// 0인 경우에 
	// [for] 6개 전까지 i번째 로또 번호 생성하기
	// 1인 경우에 
	// [출력] 로또 번호를 생성하지 않겠습니다.

	srand(time(NULL));

	
	int min = 1;
	int max = 45;
	
	int choice;
	int i = 0;

	cout << "당신의 로또 번호를 생성하겠습니까? (맞으면 0, 틀리면 1):\n" << endl;
	cin >> choice;

	if (choice == 0)
	{
		cout << "당신의 로또 번호를 생성하겠습니다.\n"<< endl;

		for (i = 0; i < 7; i++)
		{
			int lotto = rand() % (max - min + 1) + min;
			cout << i+1 << "번째 로또 번호는 " << "'" << lotto << "'" << " 입니다." << endl;
		}
	}
	else if (choice == 1)
	{
		cout << "로또 번호를 생성하지 않겠습니다.\n" << endl;
	}


	//난수파트 강의를 못들어서 난수 부분은 챗지피티 도움을 받았습니다.


}