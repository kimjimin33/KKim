#include<iostream>
using  namespace std;

void main()
{
	//[If문] ~면 ~한다
	//문법@@
	//if ( boolean )
	//{
	//		boolean이 true면 실행할 내용
	//}

	bool check = true;
	int year = 2024;
	if (check)
	{
		printf("올해는 2024년도 입니다.\n");
	}

	//[비교연산자]
	// == : 왼쪽과 오른쪽이 같다
	// != : 왼쪽과 오른쪽이 다르다

	//비교연산자의 결과는 항상 boolean
	// ex. 1 > 2 (false)
	// ex. 1 < 2 (true)
	//if (boolean)
	//{
	//	boolean이 false면 실행할 내용
	//}

	//[IF ELSE 문]
	int hp = 10;
	if (hp > 0)
	{
		printf("이 유닛은 살아있습니다.\n");
	}
	else
	{
		printf("이 유닛은 죽었습니다.\n");
	}
	//[IF, ELSE IF, ELSE 문]
	//if (boolean)
	//{
	//	boolean이 true면 실행할 내용
	//}
	//else if (boolean2)
	//{
	//		boolean이 false고,
	//		boolean이 falsr면 실행할 내용
	//}

	//만약 boolean이면 ~을 실행하고
	//그렇지않고 만약 boolean2면 ~을 실행하고
	//그렇지 않으면 ~를 실행한다.

	int score = 80;

	if (90 < score)
	{
		printf("이 학생은 A학점입니다.\n");
	}
	else if (80 < score)
	{
		printf("이 학생은 B학점입니다.\n");
	}
	else if (70 < score)
	{
		printf("이 학생은 C학점입니다.\n");
	}
	else
	{
		printf("이 학생은 F학점입니다.\n");
	}

	//연산자
	int result1 = 3 + 5;
	int result2 = 2 * 5;
	printf("result1 :%f\n", result1);
	printf("result2 :%s\n", result2);
}