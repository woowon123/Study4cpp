//C언어 기초 공부
//문자열과 배열을 활용해보자

//문제6 [문자열과 배열]
//입력 받은 문자열의 길이와 을 역순으로 출력하시오.
#pragma warning(disable: 4996) 

#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	int count;
	scanf("%s", word);
	
	printf("역순 출력 : ");
	for (int i = strlen(word)-1; i >= 0; --i)
	{
		printf("%c", word[i]);
	}
	printf("  문자열 길이 : %d", strlen(word));
}