//C언어 기초 공부
//함수의 정의와 활용, 연산자 및 논리 연산자 활용을 해보자
//조건문, 반복문, 함수를 활용하여 문제를 해결해보자

//문제5 [소수의 출력]
//입력 받은 두 수를 AB,  두 수 사이의 소수를 출력하라
//입렵 받은 수는 A가 클수도 B가 클수도 있다.
#include <stdio.h>

void printhigher(int first, int second)
{
	int k;
	for (int i = 2; i < second + 1; ++i)
	{
		for (k = 2; k < i; ++k)
			if (i%k == 0)
				break;
		if (k == i)
		{
			if (i >= first)
			{
				printf("%d ", i);
			}
		}
	}
}
int main()
{
	int first, second;
	int k,h;
	scanf("%d %d", &first,&second);
	if (first < second)
	{
		k = first;
		h = second;
		printhigher(k, h);

	}
	if (first > second)
	{
		k = first;
		h = second;
		printhigher(h, k);

	}
	return 0;
}