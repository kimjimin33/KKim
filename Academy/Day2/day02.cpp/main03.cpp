#include<iostream>

using namespace std;

void main()
{
	//변수를 생성해서 출력하는 것

	//사용자가 직접 값을 입력해서
	//그거대로 자기소개를 할수있는 프로그램

	//사용자가 직접 값을 입력하는 방법

	//입력: scanf_s 라는 함수를 통해서 진행
	//문법@@ scanf_s("%d",&변수명);
	//=>변수안에 사용자가 입력한 값이 들어감

	int year = 0;
	printf("태어난 연도를 입력해주세요:");
	scanf_s("%d\n", &year);



	char name[100] = "";
	printf("이름을 입력해주세요:");
	scanf_s("%s", name, (int)sizeof(name));

	printf("제 이름은 %s입니다.\n", name);
	printf("저는 %d년생 입니다.\n", year);

}
