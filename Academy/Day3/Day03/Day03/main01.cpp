#include<iostream>

using namespace std;

void main()
{
	//  랜덤
	//
	int random = rand();

	cout << "랜덤값:" << random << endl;

	// ★.위 식은 정해진 수들이 나오지만

	// rnad() 는 무작위 수를 뽑기 위해 구현한 함수
	// 미리 고정된 난수를 seed를 통해 통안에 숫자들을 순서대로 넣은 것을 
	// 그대로 뽑아오는 결과값

	// 우리가 난수라고 느낄 수 밖에 없는 절대적인 값
	// 시간

	// seed(통안에 숫자를 넣는 방법)을 바꾸면
	// 진짜로 랜덤값을 뽑아온 것처럼 느끼게할 수 있다.
	// 시간을 seed 값으로 넣는 것

	// seed를 섞는 함수
	// srand(값);
	srand(time(NULL)); //★. 요렇게 하면 완전히 랜던값이 나옴

	int random3 = rand();
	cout << "랜덤값은 : " << random3;


	
}