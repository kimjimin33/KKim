#include<iostream>

void main()
{
	printf("hello worlld\n");
	//printf를 통해서 자기소개

	printf("제 이름은 김지민입니다.\n");
	printf("저는 00년생입니다.\n");

	// 입력값에 따라 다르게 출력해야 함 

	// 게임 클라이언트
	// 레벨, 플레이어 닉네임, 데미지, 끼는 장비

	// 변수선언이 중요! 
	// 문법@@
	// 1. 자료형 변수명 = 값;
	// 2. 자료형 변수명;

	// 값 : 00, 김지민과 같은 내용
	// 변수명 :  내가 앞으로 부를 이름
	// 자료형 : 정수인지, 실수인지, 문자인지에 대한 정보

	// 정수형 자료형
	// int, float, char, bool
	// int : 정수
	// float : 실수
	// char : 문자
	// bool : 참(true), 거짓(false)

	int year = 00;
	char name[128] = "김지민";

	// 문자열이 조금 독특함
	// char => 문자열이 아니라 문자! => a b c와 같은 문자 하나만 담을 수 있음
	// 배열이라는 문법을 통해 여러문자를 받을 수 있게 함

	// 변수를 출력하는 방법
	// 정수, 실수, 문자열, 문자 이거에 따라 출력 방법이 달라짐
	// 정수 : %d
	// 실수 : %s
	// 문자 : %c

	printf("year : %d\n", year);
	printf("name : %s\n", name);

	printf("year : %d, name : %s\n", year, name);

	//실습
	//printf("제 이름은 김지민입니다.");
	//printf("저는 00년생 입니다.);



	



}