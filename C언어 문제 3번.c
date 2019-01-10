//C언어 기초 공부
//함수의 정의와 활용, 연산자 및 논리 연산자 활용을 해보자
//조건문, 반복문, 함수를 활용하여 문제를 해결해보자

//문제1 [두 수 사이의 배수]
//입력 받은 두 수를 AB,  A의 배수지만 B의 배수가 아닌 수를 1~100사이에서 출력하는 프로그램

#include <stdio.h>

int main()
{

	int first, second;
	scanf("%d %d", &first, &second);

	for (int i = 1; i < 101; ++i)
	{
		if (i%first == 0 && i%second != 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}