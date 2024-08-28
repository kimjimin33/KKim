#include <iostream>

using namespace std;
enum class ERockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};
int main()
{
	
	int hand[2] = {};
	int comHand[2] = {};
	cout << "가위(0),바위(1),보(2) 중에 낼 것을 두개 골라주세요" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> hand[i];
	}
	// 반복문이기 떄문에
	// 혹시나 손의 갯수가 늘어났을 때 유연하게 대처가 가능


	// 컴퓨터가 내는건 입력받는게 아니라 랜덤으로 뽑기
	srand(time(NULL));

	for (int i = 0; i < 2;i++)
	{
			comHand[i] = rand() % 3;
	}
	cout << "내가 낸 것 :";
	for (int i = 0; i < 2; i++)
	{
		if (hand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위";
		}
		else if (hand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위" ;
		}
		else if (hand[i] == (int)ERockScissorPaper::Paper)
		{
			cout << "보" ;
		}
		cout << endl;
	}

	cout << "컴퓨터가 낸 것 :";
	for (int i = 0; i < 2; i++)
	{
		if (comHand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위";
		}
		else if (comHand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위";
		}
		else if (comHand[i] == (int)ERockScissorPaper::Paper)
		{
			cout << "보";
		}
	}
	cout << endl;

	//그 다음 내가 왼손을 낼건지 오른손을 낼건지 결정한다

	cout << "왼손(0)과 오른손(1) 중에 골라주세요." << endl;
	int handChoice;
	cin >> handChoice;

	//finalHand[0] => 내가 최종적으로 낼 것
	//finalHand[1] => 컴퓨터가 최종적으로 낼 것

	int finalHand[2] = {};
	finalHand[0] = hand[handChoice];
	finalHand[1] = comHand[rand()%2];

	// 최종적으로 낸 손을 출력한다
	cout << "최종적으로 낸 것 :";
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			cout << "플레이어: ";
		}
		else if (i == 1)
		{
			cout << "컴퓨터: ";
		}
		if (finalHand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위" << endl;
		}
		else if (finalHand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위" << endl;
		}
		else if (finalHand[i] == (int)ERockScissorPaper::Paper)
		{
			cout << "보" << endl;
		}
	}
	

	// 최종적으로 낸 손을 승패판정을 내린다.
	if (finalHand[0] == finalHand[1])
	{
		cout << "비겼습니다" << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Scissor &&
		finalHand[1] == (int)ERockScissorPaper::Rock)
	{
		cout << "패배하였습니다." << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Rock &&
		finalHand[1] == (int)ERockScissorPaper::Paper)
	{
		cout << "패배하였습니다." << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Paper &&
		finalHand[1] == (int)ERockScissorPaper::Scissor)
	{
		cout << "패배하였습니다." << endl;
	}
	else
	{
		cout << "승리하였습니다" << endl;
	}


		

	return 0;
}
//int arr[10]
	// arr[1] ~ arr[10] (x)
	// arr[0] ~ arr[9] (o)

	// 가위바위보 하나빼기
	// 수도코드
	// 내가 낼 것 2개 정하기 hand[2]-> hand[0], hand[1] 
	// 상대가 낼 것 2개 정하기 comHand[2]
	//-> comHand[0],comHand[1],comHand[2]

	// 내가 낸 것 2개를 출력한다.
	// 컴퓨터가 낸 것 2개를 출력한다.

	// 그 다음 내가 왼손을 낼건지 오른 손을 낼건지 결정한다.

	// 컴퓨터도 랜덤으로 왼손과 오른손 중에 결정한다

	// 최종적으로 낸 손을 서로 비교하여 승패판정을 내린다.

	// 내가 낼 것 2개를 정한다.
	// 2개를 정하면 -> 정한 내용을 기억
	// 변수를 선언해서 기억
	// 2개이기 때문에 배열을 활용하는게 좋다.