//C언어 기초 공부
//함수의 정의와 활용, 연산자 및 논리 연산자 활용을 해보자

//문제 1 
//입력받는 초단위 숫자를 시:분:초로 정보를 출력해보자
#include <stdio.h>

void changeSec(int num)
{
	int total = num;
	int h = total / 3600;
	int m = (total % 3600) / 60;
	int s = (total % 3600) % 60;

	printf("%d : %d : %d", h, m, s);
}

int main()
{

	int sec;
	scanf("%d", &sec);
	changeSec(sec);
	return 0;
}