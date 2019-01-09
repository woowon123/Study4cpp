//C언어 기초 공부
//함수의 정의와 활용, 연산자 및 논리 연산자 활용을 해보자

//문제 2 
//입력받는 년도가 윤년인지 출력하자
//4로 나누어 떨어지는 년도는 윤년이다.
//4로 나누어 떨어지지만 100으로 나누어 떨어지는 년도는 윤년이 아니다.
//4와100으로 나누어 떨어지면서 400으로 나누어 떨어지면 윤년이다.
#include <stdio.h>

void Check(int num)
{
	if (num%4==0||(num%4==0 && num%100 !=0)||(num % 4 == 0 && num % 100 == 0) && num % 400 == 0)
	{
		printf("윤년입니다.\n");
	}
	else
	{
		printf("윤년이아닙니다.\n");
	}

}

int main()
{

	int year;
	while (1)
	{
		scanf("%d", &year);
		Check(year);

	}
	return 0;
}